/*We Need to print this pattern 

INPUT:
N=4

OUTPUT:
1
01
101
0101

*/

#include <iostream>
using namespace std;

void Pattern_0_1(int n){

    bool isOdd = false;

    for(int row=1;row<=n;row++){

        if(row&1) isOdd = true;

        for(int col =1;col<=row;col++){
            if(isOdd){
                cout << 1 << " ";
                isOdd = false;
            }
            else{
                cout << 0 << " ";
                isOdd = true;
            }
        }
                       
        cout << endl;
    }
}


int main(){

    int n;
    cout << "Enter num to print 0-1_Pattern ";
    cin >> n;

    Pattern_0_1(n);

    return 0;
}
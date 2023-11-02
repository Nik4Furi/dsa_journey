/*We Need to print this pattern 

INPUT:
N=4

OUTPUT:
1234
123
12
1

*/

#include <iostream>
using namespace std;

void InvertedNumber(int n){

    for(int row=n;row>=1;row--){
       
       //Print first part of the top section
        for(int col =1;col<=row;col++)
            cout << col << " ";
                       
        cout << endl;
    }
}


int main(){

    int n;
    cout << "Enter num to print InvertedNumber ";
    cin >> n;

    InvertedNumber(n);

    return 0;
}
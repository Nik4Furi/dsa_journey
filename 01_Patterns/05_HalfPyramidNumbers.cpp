/*We Need to print this pattern 

INPUT:
N=4

OUTPUT:
1
22
333
4444

*/

#include <iostream>
using namespace std;

void   HalfPyramidNumber(int n){
    
    for(int row=1;row<=n;row++){
       
        for(int col =1;col<=row;col++){
           
           cout << row << " ";
        }
           
        cout << endl;
    }
}


int main(){

    int n;
    cout << "Enter num to print half pyramid for numbers ";
    cin >> n;

      HalfPyramidNumber(n);

    return 0;
}
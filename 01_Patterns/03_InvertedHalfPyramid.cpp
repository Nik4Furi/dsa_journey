/*We Need to print this pattern 

INPUT:
N=4

OUTPUT:
****
***
**
* 

*/

#include <iostream>
using namespace std;

void InvertedHalfPyramid(int n){
    
    for(int row=n;row>=1;row--){
        for(int col=row;col>=1;col--)
            cout << "*";
           
        cout << endl;
    }
}


int main(){

    int n;
    cout << "Enter num to print inverted half pyramid ";
    cin >> n;

    InvertedHalfPyramid(n);

    return 0;
}
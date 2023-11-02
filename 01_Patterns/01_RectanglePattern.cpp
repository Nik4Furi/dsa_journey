/*We Need to print this pattern 

INPUT:
N=4

OUTPUT:
****
****
****
**** 

*/

#include <iostream>
using namespace std;

void RectanglePattern(int n){
    
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++)
            cout << "*";
           
        cout << endl;
    }
}


int main(){

    int n;
    cout << "Enter num to print renctangle ";
    cin >> n;

    RectanglePattern(n);

    return 0;
}
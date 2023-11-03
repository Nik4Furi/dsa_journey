/*We Need to print this pattern 

INPUT:
N=9

OUTPUT:

  *       *
 *  *   *   *
*     *       *

*/

#include <iostream>
using namespace std;

void Zig_Zag_Pattern(int n){

    int div = n/3; //this pattern will valid only for divisble by 3

    for(int row=1;row<=div;row++){
        
        for(int col=1;col<=n;col++){

            if((row+col)%4 == 0 || ( row%2 == 0 && col%4==0 ))
                cout << "* ";
            else cout << "  "; 
        }
        cout <<endl;
    }

}


int main(){

    int n;
    cout << "Enter num to print zig-zag pattern ";
    cin >> n;

    Zig_Zag_Pattern(n);

    return 0;
}
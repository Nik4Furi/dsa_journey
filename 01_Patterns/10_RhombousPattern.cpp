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

void RhombusPattern(int n){

    int totalColumns = n + (n-1);

    for(int row=0;row<n;row++){
        int temp = n-row;

        for(int col=1;col<=totalColumns-row;col++){
            if(col < temp) cout << "  ";
            else cout << "* ";
        }
        

        cout <<endl;
    }

}


int main(){

    int n;
    cout << "Enter num to print rhombous pattern ";
    cin >> n;

    RhombusPattern(n);

    return 0;
}
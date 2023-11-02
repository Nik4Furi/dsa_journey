/*We Need to print this pattern 

INPUT:
N=4

OUTPUT:
   1
  1 2
 1 2 3
1 2 3 4

*/

#include <iostream>
using namespace std;

void NumberPattern(int n){

    for(int row=n;row>=1;row--){
        int cnt = 1;
        for(int col=1;col<=n;col++){
            if(col <= row-1) cout << "  ";
            else cout <<" "<< cnt++ << " ";
        }
        cout <<endl;
    }
  
}


int main(){

    int n;
    cout << "Enter num to print rhombous pattern ";
    cin >> n;

    NumberPattern(n);

    return 0;
}
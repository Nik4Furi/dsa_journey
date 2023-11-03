/*We Need to print this pattern 

INPUT:
N=4

OUTPUT:
   1
  212
 32123
4321234

*/

#include <iostream>
using namespace std;

void PlaindromicPattern(int n){

    for(int row=1;row<=n;row++){

        int temp = row;
        for(int col=1;col<=n;col++){
            if(col <=n-row) cout << "  ";
            else cout <<  temp-- << " ";
        }

        //Next part to print
        int cnt =2;

        while(row >= 2 && cnt <= row)
            cout << cnt ++ << " ";
        
        cout << endl;
        
    }
}


int main(){

    int n;
    cout << "Enter num to print palindromic pattern ";
    cin >> n;

    PlaindromicPattern(n);

    return 0;
}
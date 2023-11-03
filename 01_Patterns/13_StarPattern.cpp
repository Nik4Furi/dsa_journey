/*We Need to print this pattern 

INPUT:
N=4

OUTPUT:
   *
  ***
 *****
*******
*******
 *****
  *** 
   *

*/

#include <iostream>
using namespace std;

void StarPattern(int n){

    for(int row=1;row<=n;row++){

        for(int col=1;col<=n;col++){
            if(col <=n-row) cout << "  ";
            else cout <<  "*" << " ";
        }

        //Next part to print
        int cnt =2;

        while(row >= 2 && cnt <= row){
            cout << "*" << " ";
            cnt++;
        }
        
        cout << endl;
        
    }

    for(int row=n;row>=1;row--){

        for(int col=1;col<=n;col++){
            if(col <=n-row) cout << "  ";
            else cout <<  "*" << " ";
        }

        //Next part to print
        int cnt =2;

        while(row >= 2 && cnt <= row){
            cout << "*" << " ";
            cnt++;
        }
        
        cout << endl;
        
    }


}


int main(){

    int n;
    cout << "Enter num to print star pattern ";
    cin >> n;

    StarPattern(n);

    return 0;
}
/*We Need to print this pattern 

INPUT:
N=4

OUTPUT:
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

*/

#include <iostream>
using namespace std;

void ButterFly(int n){

    //Print the top section
    for(int row=1;row<=n;row++){
       
       //Print first part of the top section
        for(int col =1;col<=n;col++){
            if(col <=row) cout << "* "; //print star
            else cout << "  ";
        }

       //Print second part of the top section
        for(int col =1;col<=n;col++){
            if(col <=n-row) cout << "  "; //print star
            else cout << "* ";
        }
                       
        cout << endl;
    }
     //----------------- Top section of the butterfly

    //Print the bottom section
    for(int row=n;row>=1;row--){
       
       //Print first part of the bottom section
        for(int col =1;col<=n;col++){
            if(col <= row) cout << "* "; //print star
            else cout << "  ";
        }

       //Print second part of the bottom section
        for(int col =1;col<=n;col++){
            if(col <= n-row) cout << "  "; //print star
            else cout << "* ";
        }
                       
        cout << endl;
    }

    
}


int main(){

    int n;
    cout << "Enter num to print butterfly ";
    cin >> n;

    ButterFly(n);

    return 0;
}
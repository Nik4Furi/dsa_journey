/*We Need to print this pattern 

INPUT:
N=4

OUTPUT:
   * 
  **
 ***
****

*/

#include <iostream>
using namespace std;

void  HalfPyramid180Rotate(int n){
    
    for(int row=1;row<=n;row++){
       
        for(int col =1;col<=n;col++){
            if(col <= n-row) cout << " "; //print spaces
            else cout << "*"; //print stars
        }
           
        cout << endl;
    }
}


int main(){

    int n;
    cout << "Enter num to print half pyramid ";
    cin >> n;

     HalfPyramid180Rotate(n);

    return 0;
}
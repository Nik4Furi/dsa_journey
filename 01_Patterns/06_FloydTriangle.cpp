/*We Need to print this pattern 

INPUT:
N=4

OUTPUT:
1
23
456
78910

*/

#include <iostream>
using namespace std;

void FloydTriangle(int n){
    int cnt =1;
    for(int row=1;row<=n;row++){
       
        for(int col =1;col<=row;col++){
           
           cout << cnt++ << " ";
        }
           
        cout << endl;
    }
}


int main(){

    int n;
    cout << "Enter num to print floyd triangle ";
    cin >> n;

    FloydTriangle(n);

    return 0;
}
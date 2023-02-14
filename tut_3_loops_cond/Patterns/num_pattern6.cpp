#include<iostream>

using namespace std;

int main(){
    /*1
    23
    345
    */

int row=0,num;

    cout<<"Enter the number to in which approach to print NUMs: ";
    cin >> num;

    while(row < num){
        int col = 0;
        int val = row + 1 ;
        while(col <= row){
            cout << val ;
            col ++;
            val ++;
        }
        cout << endl;
        row ++;
    }

    return 0;
}
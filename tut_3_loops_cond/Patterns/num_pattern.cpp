#include<iostream>

using namespace std;

int main(){
    /*111
    222
    333
    */

int row=1,num;

    cout<<"Enter the number to in which approach to print NUMs: ";
    cin >> num;

    while(row <= num){
        int col = 0;
        while(col < num){
            cout << row;
            col ++;
        }
        cout << endl;
        row ++;
    }

    return 0;
}
#include<iostream>

using namespace std;

int main(){
    /*
    A
    BC
    DEF
    */

int row=0,num;

    cout<<"Enter the number to in which approach to print ALPHAs: ";
    cin >> num;

    while(row < num){
        int col = 0;
        char ch = 'A';
        while(col <= row){
            cout << ch ;
            ch = ch + row + col  ;
            col ++;
            // ch ++;
        }
        cout << endl;
        row ++;
    }

    return 0;
}
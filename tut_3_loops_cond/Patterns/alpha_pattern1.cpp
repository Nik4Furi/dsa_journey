#include<iostream>

using namespace std;

int main(){
    /*
    AAA
    BBB
    CCC
    */

int row=0,num;

    cout<<"Enter the number to in which approach to print ALPHAs: ";
    cin >> num;

    while(row < num){
        int col = 0;
        char ch = 'A' + row;
        while(col < num){
            cout << ch ;
            col ++;
        }
        cout << endl;
        row ++;
    }

    return 0;
}
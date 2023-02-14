#include<iostream>

using namespace std;

int main(){
    /*
        1
        22
        333
    */

int row=1,num;

    cout<<"Enter the number to in which approach to print NUMs: ";
    cin >> num;

    while(row <= num){
        int col = 0;
        while(col < row){
            cout << row;
            col ++;
        }
        cout << endl;
        row ++;
    }

    return 0;
}
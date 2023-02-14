#include<iostream>

using namespace std;

int main(){
    /*
    ABC
    ABC
    ABC
    */

int row=0,num;

    cout<<"Enter the number to in which approach to print ALPHAs: ";
    cin >> num;

    while(row < num){
        int col = 0;
        while(col < num){
        char ch = 'A' + col;
            cout << ch ;
            col ++;
        }
        cout << endl;
        row ++;
    }

    return 0;
}
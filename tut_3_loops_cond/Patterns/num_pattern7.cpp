#include<iostream>

using namespace std;

int main(){
    /*
    1
    21
    321
    */

int row=1,num;

    cout<<"Enter the number to in which approach to print NUMs: ";
    cin >> num;

    while(row <= num){
        int col = 0;
        while(col < row){
        int val = row - col ;
            cout << val ;
            col ++;
            val ++;
        }
        cout << endl;
        row ++;
    }

    return 0;
}
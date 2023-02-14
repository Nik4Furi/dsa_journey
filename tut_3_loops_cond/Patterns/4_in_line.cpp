
#include<iostream>
using namespace std;

int main(){

    /*
    ****
    ****
    ****
    ****
    */
    int row=0,num;

    cout<<"Enter the number to in which approach to print *s: ";
    cin >> num;

    while(row <= num){
int col =0;
        while(col < num){
            cout << "*";
            col ++;
        }
        cout << endl;
        row ++;
    }

    return 0;
}
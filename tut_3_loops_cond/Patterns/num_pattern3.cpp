#include<iostream>

using namespace std;

int main(){
    /*123
    123
    123

    And also print this
    321
    321
    321
    */

int row=1,num;

    cout<<"Enter the number to in which approach to print NUMs: ";
    cin >> num;
/*
    while(row <= num){
        int col = 0;
        while(col < num){
            cout << col+1;
            col ++;
        }
        cout << endl;
        row ++;
    }
*/
int val;
while (row<=num)
{
    int col = num-1;

    while (col>=0)
    {
        val = col + 1;

        cout << val;
        col --;
    }
    cout << endl;
    row ++;
    
}

    return 0;
}
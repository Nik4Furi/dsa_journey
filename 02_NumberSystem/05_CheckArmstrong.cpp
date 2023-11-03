#include <iostream>
using namespace std;

//Armstrong Number: A num, of all its digits qube is equal to actual num
/*
    Ex: 153, its digits are 1,5,3 
    and qubes are 1,125,9
    and their sum is 1+125+9 = 153 H.P.

    others are 407, 370
*/

//---------Function to find the qube of a number
int qube(int n){
    return n*n*n;
}

//--------function to check a number is armstrong
bool checkArmstrong(int n){

    //find digit
    //then digit qube
    //at end sum all them
    int sum = 0,temp=n;

    while(n){
        int lastDigit = n%10;

        sum += qube(lastDigit);

        n /= 10;
    }
    return sum == temp;
}

int main(){

    int n ;
    cout << " Enter the number to check armstrong: ";
    cin >> n ;

    string ans = checkArmstrong(n) == true ? "Armstrong" : "Not Armstrong";
    cout << "Give number "<< n << " is " << ans;

    return 0;

}
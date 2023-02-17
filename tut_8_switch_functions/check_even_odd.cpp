#include <iostream>
using namespace std;

bool checkEven(int num){
    if(num&1)
        return false;
    return true;
}

bool checkEven_Ap_1(int num){
    if(num%2)
        return false;
    return true;
}

int main(){

    int num ;
    cout << "Enter the num, to check its is even or odd: ";
    cin >> num;

    // if(checkEven(num))
    if(checkEven_Ap_1(num))
        cout << num << " is Even";
    else cout << num << " is Odd";

    return 0;
}
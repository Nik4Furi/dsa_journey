#include <iostream>
using namespace std;

void sayDigit(int num,string mapping[]){
    if(num == 0) return;

    int digit = num%10;
    num = num /10;

    sayDigit(num , mapping);

    cout << mapping[digit] << " ";
}

int main(){

    string mapping[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    int num;
    cout << "Enter the number to print: ";
    cin >> num;

    //Say the digit of the num
    sayDigit(num,mapping);

    return 0;
}
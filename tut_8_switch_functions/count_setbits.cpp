#include <iostream>
using namespace std;

int count_0s_setbits(int num){
    int count_0s=0;
    while (num != 0)
    {
        int digit = num&1;
        if(digit == 0)
            count_0s ++;  
        num = num >>1;    
    }
    return count_0s;
}

int count_1s_setbits(int num){
    int count_1s=0;
    while (num != 0)
    {
        int digit = num&1;
        if(digit == 1)
            count_1s ++;  
        num = num >>1;  
    }
    return count_1s;
}

int main(){

    int num;
    cout << "Enter the value, in we find the last ele: ";
    cin >> num;

    cout<< "No. of 0s in " << num << " are " <<count_0s_setbits(num)<<endl;
    cout<< "No. of 1s in " << num << " are " <<count_1s_setbits(num)<<endl;

    return 0;
}
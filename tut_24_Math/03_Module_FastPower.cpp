#include <iostream>
using namespace std;

//finding the power of the a,b
long long int fastPower(int a,int b){
    long long int res = 1;
    //Edge case
    if(b==0) return 1;

    while(b>0){
        if(b&1){
            //Odd 
            res = res * a;
        }
        a = a*a;
        b = b>>1;
    }
    return res;

}

int main(){

    int a,b;
    cout << "Enter the number: ";
    cin >> a;

    cout << "Enter the power: ";
    cin >> b;

    cout << "The power of "<< a << "^" << b << " is "  << fastPower(a,b);

    return 0;
}
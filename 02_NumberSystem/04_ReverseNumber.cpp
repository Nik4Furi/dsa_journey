#include <iostream>
using namespace std;


string ReverseNumberReturnStr(int n){
    string ans = "";

    if(n <= 1){
        ans = to_string(n);
        return ans;
    }

    while(n){
        int lastDigit = n%10;
        ans += to_string(lastDigit);
        n /=10;
    }
    return ans;
}


int ReverseNumberReturnInt(int n){

    if(n < 0 ) return -1;

    if(n == 1 || n == 0)return n;

    string ans = "";

    while(n){
        int lastDigit = n%10;
        ans += to_string(lastDigit);
        n /=10;
    }
    return stoi(ans);
}

int ReverseNumberReturnInt_2(int n){

    if(n < 0 ) return -1;

    if(n == 1 || n == 0)return n;

    int ans = 0;

    while(n){
        int lastDigit = n%10;
        ans = ans*10+lastDigit;
        n /=10;
    }
    return ans;
}

int main(){

    int n;
    cout << " Enter the number to reverse number: ";
    cin >> n ;

    cout << "Reverse of the "<< n << " is "<< ReverseNumberReturnStr(n);
    cout <<endl;
    cout << "Reverse of the "<< n << " is "<< ReverseNumberReturnInt(n);
    cout <<endl;
    cout << "Reverse of the "<< n << " is "<< ReverseNumberReturnInt_2(n);

    return 0;

}
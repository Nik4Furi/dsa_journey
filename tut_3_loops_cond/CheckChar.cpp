#include<iostream>

using namespace std;

int main(){

    char c;
    cout << "Enter the character ";
    cin >>c;

    if(c>=65 && c<=90){
        cout << c << " is b/w  A-Z";
    }
    else if(c>=97 && c<=122){
        cout << c<< " is b/w a-z";
    }
    else if(c>=0 && c<=9){
        cout <<c << " is b/w 0-9";
    }

    return 0;
}
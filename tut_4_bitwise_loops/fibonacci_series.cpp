#include<iostream>

using namespace std;

void fib(int num){
    int a = 0,b=1;

    cout << a << " " << b;

    for(int i=2;i<num;i++){
        int nextNum = a +b ;

        cout << " " << nextNum;

        a = b;
        b = nextNum;
    }
}

int amin(){
    int num ;
    cout << "Enter num where we print series: ";
    cin >> num;

    fib(num);

    return 0;
}

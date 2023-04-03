#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n == 0 || n==1) return n;

    

    int ans =  fibonacci(n-1)+fibonacci(n-2);
    return ans;
}

int fibonacci_series(int n){
    int a=0,b=1;

    cout << a << " "<< b << " ";

    int nextterm = 0;
    for(int i=2;i<=n;i++){
        nextterm = a+b;
        cout << nextterm << " ";
        a = b;
        b = nextterm;
    }
}

int main(){

    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    //Print the fibonacci series
    // int ans = fibonacci(n);
    // cout << "Nth term of fibonacci is "<< ans ;

    //Print the fibonacci series
    fibonacci_series(n);

    return 0;
}
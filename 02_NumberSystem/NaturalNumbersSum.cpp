#include <iostream>
using namespace std;


int NaturalNumSum(int n){
    return ( n * (n+1) )/2;
}

int main(){

    int n ;
    cout << " Enter the number to find sum of natural numbers: ";
    cin >> n ;

    cout << "Natural number sum "<< NaturalNumSum(n);

    return 0;

}       
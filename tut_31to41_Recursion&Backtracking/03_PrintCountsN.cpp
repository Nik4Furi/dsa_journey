#include <iostream>
using namespace std;

void printCounts(int n){
    if(n <= 0) return;

    printCounts(n-1);
    cout << n << " ";
}

int main(){

    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    //Print all the counts of N
    printCounts(n);

    return 0;
}
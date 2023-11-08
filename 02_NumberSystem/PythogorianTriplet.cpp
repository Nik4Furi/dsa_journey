#include <iostream>
using namespace std;


bool PythogorianTriplet(int a, int b,int c ){
    /* when triplets are match this condition
    a^2 + b^2 = c^2
    */
    int maxi = max(a,max(b,c));
    int mini1,mini2;

    if(maxi == a) mini1=b,mini2=c;
    else if(maxi == b) mini1=a,mini2=c;
    else mini1=a,mini2 =b;

    return (maxi*maxi == (mini1*mini1) + (mini2*mini2));
    
}

int main(){

    int a,b,c ;
    cout << " Enter the numbers to check they are pythogorian triplets: ";
    cin >> a >> b >> c ;

    string ans = PythogorianTriplet(a,b,c) ? "Yes" : "No";
    cout<< " Given numbers are pythogorain triplets, "<< ans << "!";

    return 0;

}
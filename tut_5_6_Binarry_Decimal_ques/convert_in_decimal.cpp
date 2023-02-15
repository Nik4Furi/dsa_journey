#include<iostream>
#include<cmath>
using namespace std;


//Convert binary to decimal
int  Ap_1_Decimal(int num){
    int ans=0,i=0;

    while (num != 0)
    {
        int digit = num%10;
        if(digit == 1)
            ans = ans + (digit * pow(2,i));
        num = num/10;
        i++;
    }
    return ans;   

}

int main(){
    int num;
    cout << "Enter the number to convert into Binary: ";
    cin >> num;

    //Convert in Binary With Some Approaches
    // Ap_1_Binary(num);

    int ans = Ap_1_Decimal(num); //Optimal
    cout << "Binary to Decimal conversion of "<<num <<" is "<< ans << endl;

    return 0;
}
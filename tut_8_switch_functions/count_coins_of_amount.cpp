#include <iostream>
using namespace std;

//Counting the coins to demonstrate the amount
void countCoins(int amount){
    int num, c_100=0, c_50 = 0,c_20=0, c_1=0;

    while (amount != 0)
    {
        if(amount > 100)
            c_100 = amount%100;
            amount = amount/100;
        if(amount > 50)
            c_50 = amount%100;
            num = amount/100;
    }

}

int main(){

    int amount ;
    cout << "Enter the amount, whose want to seperating via coins of 1,20,50,100: ";
    cin >> amount;

    countCoins(amount);

    return 0;
}
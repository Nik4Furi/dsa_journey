#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

//-----------function to check a number is prime
bool isPrime(int n){ // O(sqrt(n))
    if(n < 0) return false;

    if(n <= 1) return true;

    for(int num = 2;num<=sqrt(n);num++){
        if(n%num == 0) return false;
    }

    return true;
} //Time Complexity is O(sqrt(n))


vector<int> PrintAllPrimeNumbers(int a,int b){
    if(a < 0 || b<0) return {-1};

    if(a == b){
        if(isPrime(a)) return {a};
        else return {-1};
    }

    int maxi = max(a,b);
    int mini = min(a,b);

    vector<int> ans;

    for(int num=mini;num<=maxi;num++){
        if(isPrime(num)) ans.push_back(num);
    }

    return ans;

}

int main(){

    int a,b ;
    cout << " Enter the numbers in b/w printing all prime numbers : ";
    cin >> a >> b ;

    vector<int> ans;
    ans = PrintAllPrimeNumbers(a,b);

    cout <<endl;
    cout << "Printing all the prime numbers in b/w of "<< a <<" and "<< b << " are : " <<endl;

    for(auto ele: ans){
        cout << ele << " ";
    }

    return 0;

}
#include <iostream>
#include<vector>
#include<cmath>
#include<cstring>
using namespace std;



//Implment the sieve of erasthoras
void SieveOfErasthoras(int num){
    vector<bool> prime(num+1,true);
    int n = prime.size();
    prime[0] = prime[1] = false;

    for(int i=2;i<n;i++){
        if(prime[i]){
            for(int j=2*i;j<n;j+=i){
                prime[j] = 0;
            }
        }
    }

    //Print the array
    for(int i=0;i<prime.size();i++){
        if(prime[i])
          cout << i << " ";
    }
    cout << endl;
}

//--------------- Start to implement the segemented sieve -------------X
void SimpleSieve(int limit,vector<int>& prime){
    /*
        SimpleSieve is returning all the primes in the limit of the num, like sqrt(num)

    */
    vector<bool>mark(limit+1,true);

    for(int i=2;i*i <limit;i++){
        if(mark[i]){
            for(int j=i*i;j<limit;j+=i)
                mark[j] = 0;
        }
    }

    //Print the primes in range
    cout << "Printing the primes in sqrt(n) range: "<<endl;
    for(int i=2;i<limit;i++){
        if(mark[i]){
            prime.push_back(i);
            cout << i << " ";
        }            
    }
    cout << endl;
}

void SegementedSieve(int num){
    /*
        Segmented Sieve is helpful to finding the prime numbers from 1 to N, with less time and space
        Becasuse of simpleSieve is not a cache friendly algo.
        We divid the search space in range[low ... high] and finding the primes in that range,so its give us O(1) of memory
    
    */

    int limit = floor(sqrt(num)) + 1;
    vector<int> prime;
    prime.reserve(limit);

    //Simple sieve to finding the primes of all 1 to sqrt(n)
    SimpleSieve(limit,prime);

    // Start to divide the range and finding the low ,high segments primes
    int low=limit,high = 2*limit;

    while(low < num){
        if(high >= num) high = num;

        //Create new mark of prime vector
        bool mark[limit+1];
        memset(mark,true,sizeof(mark));

        //Now again inititalzing the simpleSieve algo to finding the primes
        for(int i=0;i<prime.size();i++){

            //Finding the minimum number in the range, then we start from there
            int loLim = floor(low/prime[i]) *prime[i];

            if(loLim < low) loLim += prime[i];

            //Start to mark all of that is marked
            for(int j=loLim;j<high;j+=prime[i])
                mark[j-low] = 0;
        }

        //Now start to print others 
        for(int k=low;k<high;k++){
            if(mark[k-low])
                cout << k << " ";
            low = low + limit;
            high = high + limit;
        }
    }
}

int main(){

    int num;
    cout << "Enter the num to print all primes: ";
    cin >> num;
    cout << "Print all the prime numbers from 1 to "<<num << endl;
    
    //Edge case
    if(num <= 1) cout << "Not a prime number"<<endl;

    /*//Simple Sieve of Erasthoras
    SieveOfErasthoras(num); */

    //Segemented Sieve
    SegementedSieve(num);

    return 0;
}
/*
    Problem Statement: Given a number, print all the divisors of the number. A divisor is a number that gives the remainder as zero when divided.

Examples
Example 1:
Input: n = 36
Output: 1 2 3 4 6 9 12 18 36
Explanation: All the divisors of 36 are printed.
*/

//Approach-I: check from 1 to num, is divisible or not, tC O(n)

//Approach-II: Check 1 to sqrt(n), is divisble or not, tC O(sqrt(n))
void printDivisorsOptimal(int n){
    
    cout<<"The Divisors of "<<n<<" are:"<<endl;
	for(int i = 1; i <= sqrt(n); i++)
		if(n % i == 0){
			cout << i << " ";
			if(i != n/i) cout << n/i << " ";
		}
	
	cout << "\n";
}

//also this is used to check a number is prime
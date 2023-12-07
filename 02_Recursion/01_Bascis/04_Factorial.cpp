
/*
Given a number X,  print its factorial.

To obtain the factorial of a number, it has to be multiplied by all the whole numbers preceding it. More precisely X! = X*(X-1)*(X-2) … 1.

Note: X  is always a positive number. 

Examples:

Example 1:
Input: X = 5
Output: 120
Explanation: 5! = 5*4*3*2*1
*/

//Appr -I: Function to printing the factorial of number, using recursion tC O(n^2)

int fact(int num){
    if(num <= 0) return 1;

    return num*fact(num-1);
}

//Appr-II: Dynamic Programing, using Recursion + Memoization

//assume we create a dp array
int factMemo(int num,vector<int> &dp){
    //base case
    if(num <= 0) return 1;

    if(dp[num] != -1) return dp[n];

    dp[num] = num*factMemo[num-1];

    return dp[num]; 
}

//Appr-III: DP, using Tabulation
int factTabu(int num){
    vector<int> dp(num+1,-1);

    dp[0] = 1;
    dp[1] = 1;

    for(int i=2;i<=num;i++)
        dp[i] = i*dp[i-1];
    return dp[num];
}

//Appr -IV: DP, with space optimization
int factSpace(int num){
    int prev=1;

    for(int i=2;i<=num;i++){
        int curr = i*prev;
        prev= curr;
    }

    return prev;
}

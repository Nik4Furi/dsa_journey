/*

Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.


153 = (1*1*1)+(5*5*5)+(3*3*3)

*/
//tC O(n)
bool ArmStrongNumber(long long num){
    //base case
    if(num < 0) return false;

    long long sum = 0;

    while(num){

        int digit = num%10;

        long long queve = digit*digit*digit;
        sum += queve;        
    }

    return sum == num;
}
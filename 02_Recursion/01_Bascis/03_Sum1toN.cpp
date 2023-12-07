
void Sum(int num,int& sum){
    //base case
    if(num < 0) return;

    Sum(num-1,sum);
    sum += num;
    return sum;
}

void PrintNum(int n){
    //base case
    if(n <=0) return;

    PrintNum(n-1);

    cout << n << endl;
}
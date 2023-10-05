void rotate(int arr[], int n)
{
 int i=0,j=n-1;
 
 while(i != j)
    swap(arr[i++],arr[j]);
}
#include <iostream>
using namespace std;

 int searchInsert(int nums[],int n, int target) {
        int s=0,e=n,m;

        while(s<=e){
            m = s + (e-s)/2;

            if(nums[m] == target){
                return m;
            }
            else if(nums[m]>target){
                e = m-1;
            }
            else {
                s = m+1;
            }
        }
        return e+1;
    }

int main(){

    int arr[] = {7,8,1,2};
    int k = 2;

    cout << "Find the element " << searchInsert(arr,4,k) << endl;
    

    return 0;
}
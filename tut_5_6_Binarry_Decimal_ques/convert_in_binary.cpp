#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

//Print Array
void Print_Arr(vector<int> arr){
    for (int i = 0; (i < arr.size() ); i++)
    {
        cout << arr[i];
    }
    cout << endl;    
}

//Reverse the array
void Rev_Array(vector<int> arr){
    int n = arr.size();
    for (int i = 0; i < n/2; i++) {

        int temp;
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;        
    }    
}

//Approach-1 To convert into Binary
void Ap_1_Binary(int num){
    vector<int> arr(20);
    int i=0;

    while(num != 0){
        int digit = num%2;
        arr[20-i-1] = digit;
        num = num/2;
        i++;
    }

    //Reverse the array, 
    Rev_Array(arr);

    //Print the array
    Print_Arr(arr);
}

int Ap_2_Binary(int num){
    int ans=0,i=0,digit;
    while(num != 0){
        digit = num&1;
        // cout << endl << digit << endl;
        ans = (digit * pow(10,i)) + ans;
        // cout << endl << ans << endl;
        num = (num>>1);
        i++;
    }
    return ans;
}
int main(){
    int num;
    cout << "Enter the number to convert into Binary: ";
    cin >> num;

    //Convert in Binary With Some Approaches
    // Ap_1_Binary(num);

    int ans = Ap_2_Binary(num); //Optimal
    cout << "Decimal to Binary conversion of "<<num <<" is "<< ans << endl;

    return 0;
}
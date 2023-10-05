/* Function to reverse arr[] from start to end*/
// Time Complexity: O(n/2)
// Space Complexity: O(1)

//Question https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

void rvereseArray(int arr[], int start, int end) 
{ 
    while (start < end) 
    { 
        int temp = arr[start];  
        arr[start] = arr[end]; 
        arr[end] = temp; 
        start++; 
        end--; 
    }  
}  

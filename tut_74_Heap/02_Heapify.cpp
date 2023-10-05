#include <iostream>
using namespace std;

/* Heapify Algo, most important, help in modify or check a tree is heap or not
*/

void heapify(int *arr,int n,int index){
    int largest = index,leftInd = 2*index, rightInd = 2*index;
    
    if(leftInd < n && arr[largest] < arr[leftInd]){
        swap(arr[leftInd],arr[largest]);
        largest = leftInd;
    }
    if(rightInd < n && arr[largest] < arr[rightInd]){
        swap(arr[largest],arr[rightInd]);
    }

    if(largest != index){
        swap(arr[largest],arr[index]);
        heapify(arr,n,largest);
    }
}


 //Printing the heap tree
    void print(int *arr,int size){
        for(int i=1;i<=size;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

int main(){
    int arr[] = {50,55,23,52,51,50};
    int n = 6;

    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }

    //Print the heap tree
    cout << endl << " Printing Heap tree" << endl;
    print(arr,n);

    return 0;
}
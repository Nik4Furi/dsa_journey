
#include <iostream>
using namespace std;

class Heap{
    public : 
    int arr[1000];
    int size;

    Heap(){
        size = size+1;
    }

    //-------------- Inserting a data into a heap-------------------X
    void insertInHeap(int data){
       size = size + 1;
       int index = size;
       arr[index] = data;

       while(index > 1){
        int parent = index/2;
        if(arr[parent] < arr[index]){
            swap(arr[parent],arr[index]);
            index = parent;
        }
        else return;
       }
    }

    //----------------- Printting the heapify array
    void print(){
        
        for(int i=1;i<=size;i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main(){

    //--------------- Start to implement the heap 
    Heap hp;
    hp.insertInHeap(55);
    hp.insertInHeap(54);
    hp.insertInHeap(53);
    hp.insertInHeap(52);
    hp.insertInHeap(50);

    //---------------- Print the array
    hp.print();

    return 0;
}
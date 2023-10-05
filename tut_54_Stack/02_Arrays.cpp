#include <iostream>
using namespace std;

/* Implmenting the stack by the arrays*/
class Stack{
    public:
    int top;
    int size;
    int *arr;

    //Constructor
    Stack(int size){
        this->size = size;
        this->top = -1;
        this->arr = new int[size];
    }

    //Push ele in the stack
    void push(int d){
        //Edge case
        if(size-top > 1){ //at least one space avialable

            //Insertion
            top++;
            arr[top] = d;
        }
        else {
            cout << "Stack is overflow"<<endl;
        }
    }

    //Pop ele from stack
    void pop(){
        //Edge case
        if(top == -1){
            cout << "Stack is underflow"<<endl;
            return;
        }
        top--;
    }

    //Peek ele of stack
    int peek(){
        //Edge case -- Array is empty
        if(top == -1) return -1;
        return arr[top];

    }

    //Check stack is empty
    void isEmpty(){
        if(top == -1) {
            cout << " Stack is empty";
            return;
        }
        cout << "Stack is not empty"<<endl;
    }
};

int main(){

    //Initalizing the stack by the array
    /*Stack* st = new Stack(4);
    st->push(45);

    cout << "Top ele of the stack is "<< st->peek() << endl; */

    Stack st(4);
    st.push(23);
    st.push(13);
    st.push(03);
    st.push(43);
    // st.push(4);

    st.pop();
    st.pop();
    st.pop();
    st.pop();
    // st.pop();
    cout << "Top ele of the stack is "<< st.peek() << endl;
    
    // st.isEmpty();
    return 0;
}
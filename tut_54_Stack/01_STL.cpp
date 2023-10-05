#include <iostream>
#include<stack>
using namespace std;

int main(){
    /* Stack implmentation by the STL of C++*/
    stack<int> st;
    st.push(34);
    st.push(14);
    st.push(4);

    st.pop();

    cout << "Pop the top ele from stack "<< st.top() << endl;
    cout << "Stack is empty "<< st.empty() << endl;
    cout << "Size of stack is "<< st.size() << endl;
    

    return 0;
}
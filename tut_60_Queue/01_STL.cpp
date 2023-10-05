
#include <iostream>
#include<queue>
using namespace std;


int main(){

    queue<int> q;

    q.push(23);
    q.push(2);
    // q.pop();

    cout << q.front() << endl;

    return 0;
}
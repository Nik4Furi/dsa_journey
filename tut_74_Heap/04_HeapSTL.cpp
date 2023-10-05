#include <iostream>
#include<queue>

using namespace std;

int main(){

    priority_queue<int> pq;

    pq.push(50);
    pq.push(52);
    pq.push(53);
    pq.push(55);
    pq.push(50);
    pq.push(60);

    //Check the top element of heap tree
    cout << " Top ele " << pq.top() << endl;
    pq.pop();
    cout << " Top ele " << pq.top() << endl;

    priority_queue<int,vector<int>, greater<int>> p;

     p.push(50);
    p.push(52);
    p.push(53);
    p.push(55);
    p.push(50);
    p.push(60);

    //Check the top element of heap tree
    cout << " Top ele " << p.top() << endl;
    p.pop();
    p.pop();
    cout << " Top ele " << p.top() << endl;



    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int a=-3;
    int b=4;

    cout << "a&b is " <<  (a&b)<<endl;
    cout << "Or opr ans "<< (a|b)<<endl;
    cout << "not opr ans "<< (~a )<<endl;
    cout << "xor opr ans "<<( a^b)<<endl;

    cout << "left shift 5 by 1 " << (a<<1) << endl;
    cout << "right shift 5 by 1 " << (a>>1) << endl;

    return 0;
}
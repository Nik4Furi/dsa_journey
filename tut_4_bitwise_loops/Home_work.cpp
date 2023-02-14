#include<iostream>

using namespace std;

int main(){
    // int a=10,b=1;
    // cout << ++a ;

    // int a = 1;
    // int b = a ++;
    // int c = ++a;

    // cout << b << " " << c;
    // << (++a == a);

// for(int i=0;i<=5;i--){
//     cout << i << " ";
//     i++;
// }


for (int i = 0; i < 5; i++)
{
    for (int j = 0; j <= 5; j++)

    {
        if((i+j) == 10)
            break;
        cout << i << " " << j << endl;
    }
    
}

cout << "Break loop";
    // if(++a){
    //     cout << b;
    // }
    // else {
    //     cout << ++b;
    // }
    return 0;
}
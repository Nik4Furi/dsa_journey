#include<iostream>

using namespace std;

//Left shift the content
void LeftShift(int num,int count){
    for(int i=0;i<count;i++){
        num = num*2;
    }
    cout << "Left shift the num "<<num;
}

//Right shift the content
void RightShift(int num,int count){
    for(int i=0;i<count;i++){
        num = num/2;
    }
    cout << "Right shift the num "<<num;
}

int main(){
    int num;
    cout << "Enter the num, whoose shift: ";
    cin >> num;

    int count ;
    cout << "Enter the count, to how many time to shift: ";
    cin >> count;

    //Left Shift the content
    // LeftShift(num,count);

    //Right Shift the content
    RightShift(num,count);
    // cout << "Left shift the 5 by 1 " << (5<<1) << endl;

    return 0;
}

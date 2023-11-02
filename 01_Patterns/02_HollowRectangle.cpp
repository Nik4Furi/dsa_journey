/*We Need to print this pattern
N=4
****
*  *
*  *
****
*/

#include <iostream>
using namespace std;

void HollowRectanglePattern(int n)
{

    for (int row = 1; row <= 1; row++)
    {
        for (int col = 1; col <= n; col++)
            cout << "*";
        cout << endl;
    }

    for (int row = 2; row < n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (col == 1 || col == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    for (int row = n; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
            cout << "*";
        cout << endl;
    }
}

void HollowRectanglePattern2(int n){

    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            if(row == 1 || row == n || col == 1 || col == n)
                cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}

int main()
{

    int n;
    cout << "Enter num to pring hollow renctangle ";
    cin >> n;

    // HollowRectanglePattern(n);
    HollowRectanglePattern2(n);

    return 0;
}
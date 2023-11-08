/*We Need to print this pattern

INPUT:
N=5

OUTPUT:

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

*/

#include <iostream>
using namespace std;

// function to print the factorial using Space Optimization
// Time Complexity O(n)
int FactorialSpace(int n)
{

    if(n <= 1)
        return 1;
    

    int prev = 1;

    for (int i = 2; i <= n; i++)
    {
        int curr = i * prev;

        prev = curr;
    }
    return prev;
}

void PascalTriangle(int n)
{

    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col <= row; col++)
        {
            cout << FactorialSpace(row) / (FactorialSpace(col) *FactorialSpace(row - col) ) << " ";
        }
        cout << endl;
    }
}

int main()
{

    int n;
    cout << "Enter num to print pascal triangle ";
    cin >> n;

    PascalTriangle(n);

    return 0;
}
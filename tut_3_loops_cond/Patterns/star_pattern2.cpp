#include <iostream>

using namespace std;

int main()
{
    /* Print this patter
     *
     **
     ***
     */

    int row = 1, num;
    cout << "Enter the num. to print how many time to print the *s: ";
    cin >> num;

    while (row <= num)
    {
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
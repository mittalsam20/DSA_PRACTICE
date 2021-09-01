#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Row:-";
    cin >> row;
    cout << "\ncol:-";
    cin >> col;
    for (int j = 0; j < row; j++)
    {
        for (int i = 0; i < col; i++)
        {
            if (j == 0 || j == row - 1 || i == 0 || i == col - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
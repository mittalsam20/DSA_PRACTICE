#include <iostream>
using namespace std;

int clear_bit(int n, int pos)
{
    return (n & (~(1 << pos)));
}

int main()
{
    int n, pos;
    cout << "NUMBER:-" << endl;
    cin >> n;
    cout << "Which pos bit to set as 0:-";
    cin >> pos;
    cout << clear_bit(n, pos);
}

//update bit is nothin but clear bit then set bit

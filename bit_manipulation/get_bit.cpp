#include <iostream>
using namespace std;

int get_bit(int n, int pos)
{
    if (n & (1 << pos))
        return 1;
    else
        return 0;
}

int main()
{
    int n, pos;
    cout << "NUMBER:-" << endl;
    cin >> n;
    cout << "Which pos bit to find:-";
    cin >> pos;
    cout << get_bit(n, pos);
}
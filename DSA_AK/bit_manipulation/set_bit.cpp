#include <iostream>
using namespace std;

int set_bit(int n, int pos)
{
    return (n | (1 << pos));
}

int main()
{
    int n, pos;
    cout << "NUMBER:-" << endl;
    cin >> n;
    cout << "Which pos bit to set as 1:-";
    cin >> pos;
    cout << set_bit(n, pos);
}
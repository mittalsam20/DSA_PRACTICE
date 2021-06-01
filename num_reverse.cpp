#include <iostream>
using namespace std;
int main()
{
    cout << "Number:-";
    int n, temp, rev;
    cin >> n;
    temp = n;
    while (temp)
    {
        rev = temp % 10;
        temp = temp / 10;
        cout << rev;
    }
}
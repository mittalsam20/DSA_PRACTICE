#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Number:-";
    int n, temp, ld, sum = 0;
    cin >> n;
    temp = n;
    while (temp)
    {
        ld = temp % 10;
        sum = sum + pow(ld, 3);
        temp = temp / 10;
    }
    if (sum == n)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";
}
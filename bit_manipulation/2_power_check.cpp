#include <iostream>
using namespace std;
bool power_of_2(int n)
{
    return (n && !(n & (n - 1)));
}
int main()
{
    int n;
    cout << "Number:-";
    cin >> n;
    cout << power_of_2(n);
}
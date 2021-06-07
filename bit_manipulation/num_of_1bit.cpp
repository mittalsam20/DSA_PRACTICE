#include <iostream>
using namespace std;
int num1(int n)
{
    // if (n == 1)
    //     return 1;
    int cnt = 0;
    while (n & (n - 1))
    {
        ++cnt;
        n--;
    }
    cout << cnt;
    return cnt;
}
int main()
{
    int n;
    cin >> n;
    num1(n);
}
#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0)
        return 1;
    int ans = fact(n - 1);
    return n * ans;
}

int main()
{
    int n, p;
    cout << "Number:-";
    cin >> n;
    cout << fact(n) << endl;
}
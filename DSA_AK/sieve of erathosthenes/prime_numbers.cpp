#include <iostream>
#include <vector>
using namespace std;

void prime(int n)
{
    int prime_no[100] = {0}; //0 means unmarked
    for (int i = 2; i <= n; i++)
    {
        if (prime_no[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime_no[j] = 1; //1 means marked
            }
        }
    }

    for (int i = 2; i < n; i++)
        if (prime_no[i] == 0)
            cout << i << " ";
}

int main()
{
    int n;
    cout << "Number:-";
    cin >> n;
    prime(n);
}
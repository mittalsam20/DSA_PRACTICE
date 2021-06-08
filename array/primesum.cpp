#include <iostream>
#include <vector>
using namespace std;

void seive(int n)
{
    vector<int> v(n, 0);
    vector<int> list;
    for (int i = 2; i < n; i++)
        if (v[i] == 0)
        {
            for (int j = i * i; j < n; j += i)
                v[j] = 1;
        }
    for (int i = 2; i < n; i++)
        if (v[i] == 0)
            list.push_back(i);
    // for (int i = 0; i < list.size(); i++)
    //     cout << list[i];
    // cout << endl;
    for (int i = 0; i < list.size(); i++)
    {
        for (int j = 0; j < list.size(); j++)
        {
            if (list[i] + list[j] == n)
            {
                cout << list[i] << " " << list[j] << endl;
                return;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    seive(n);
}
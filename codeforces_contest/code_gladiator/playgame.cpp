#include <iostream>
#include <vector>
using namespace std;

void prime(int s, int e)
{
    vector<int> v;
    v.clear();

    for (int k = s; k <= e; k++)
    {
        vector<int> marker(40, 0); //0 means unmarked
        for (int i = 2; i <= k; i++)
        {
            if (marker[i] == 0)
            {
                for (int j = i * i; j <= k; j += i)
                {
                    marker[j] = 1; //1 means marked
                }
            }
        }
        for (int i = 2; i <= k; i++)
            if (marker[i] == 0)
            {
                v.push_back(i);
            }

        for (auto ele : v)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
    // if (v.empty())
    //     cout << -1 << endl;
    // else
    //     cout << v.back() - v[0] << endl;
}

int main()
{
    int t;
    cin >> t;
    int a[2 * t];
    for (int i = 0; i < 2 * t; i++)
        cin >> a[i];
    for (int i = 0; i < (2 * t) - 1; i += 2)
    {
        int start = a[i];
        int end = a[i + 1];
        if (start == end)
        {
            cout << 0 << endl;
            continue;
        }
        else
            prime(start, end);
    }
}

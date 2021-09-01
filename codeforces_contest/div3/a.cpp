#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;
    cin >> n;
    vector<int> v(n);

    while (t)
    {
        int maxn = INT_MIN, minn = INT_MAX, imx = 0, imn = 0;
        for (auto &i : v)
        {
            cin >> i;
            v.push_back(i);
        }
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] > maxn)
            {
                maxn = max(maxn, v[i]);
                imx = i;
            }
            if (v[i] < minn)
            {
                minn = min(maxn, v[i]);
                imn = i;
            }
        }
        int ans = 0;
        imx = min(imx, n - imx);
        imn = min(imn, n - imn);
        int near = min(imx, imn);

        // while (true)
        // {
        //     if (imx <= n / 2)
        //     {
        //         v.erase(v.begin());
        //         ans++;
        //     }
        //     else if (imx >= n / 2)
        //     {
        //         v.pop_back();
        //         ans++;
        //     }
        //     if (v[imx] == v.front() || v[imn] == v.front() || v[imx] == v.back() || v[imn] == v.back())
        //     {
        //         break;
        //     }
        // }

        cout << ans;
        v.clear();
        --t;
    }
}

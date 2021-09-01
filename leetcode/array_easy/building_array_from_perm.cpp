#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans[n], nums[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> nums[i];
    // }

    for (int i = 0; i < n; i++)
    {
        ans[i] = nums[nums[i]];
        cout << ans[i];
    }
}
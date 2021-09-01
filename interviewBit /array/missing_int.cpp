/*
Given an unsorted integer array, find the first missing positive integer.
Example:
Given [1,2,0] return 3,
[3,4,-1,1] return 2,
[-8, -7, -6] returns 1
Your algorithm should run in O(n) time and use constant space.
*/

#include <iostream>
#include <algorithm>
using namespace std;
int miss(int a[], int n)
{
    int cnt = 0;
    sort(a, a + n);
    for (int j = 1; j <= n; j++)
    {
        cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (j != a[i])
                cnt++;
            if (cnt == n)
                return j;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    miss(a, n);
}
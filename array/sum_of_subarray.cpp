/*
Find the contiguous subarray within an array (containing at least one number) which has the largest sum.
For example:
Given the array [-2,1,-3,4,-1,2,1,-5,4],
the contiguous subarray [4,-1,2,1] has the largest sum = 6.
For this problem, return the maximum sum.
https://www.interviewbit.com/problems/max-sum-contiguous-subarray/
*/

#include <iostream>
#include <climits>
using namespace std;
int sub_array_sum(int a[], int n)
{
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            mx = max(mx, sum);
        }
    }
    cout << mx;
    return mx;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sub_array_sum(a, n);
}
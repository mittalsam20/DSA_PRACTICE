#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "Number of Elements";
    cin >> n;
    int arr[n], maxN = INT_MIN, minN = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // if (arr[i] > max)
        //     max = arr[i];
        // if (arr[i] < min)
        //     min = arr[i];
        maxN = max(maxN, arr[i]);
        minN = min(minN, arr[i]);
    }
    cout << maxN << minN;
}
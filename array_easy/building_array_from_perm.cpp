#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int it[n], index[n], nums[n];
    for (int i = 0; i < n; i++)
    {
        cout << "index";
        cin >> index[i];
        cout << "nums";
        cin >> nums[i];
    }
    for (int i = 0; i < n; i++)
    {
        it[index[i]] = nums[i];
        cout << it[i] << endl;
    }
}
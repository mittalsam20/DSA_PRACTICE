
/*You’re given a read only array of n integers. Find out if any integer occurs more than n/3 
times in the array in linear time and constant additional space.
If so, return the integer. If not, return -1.
If there are multiple solutions, return any one.
Example :
Input : [1 2 3 1 1]
Output : 1 
1 occurs 3 times which is more than 5/3 times.*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
        // cout << "ss";
        v.push_back(i);
    }
    for (int i = 0; i < v.size(); i++)
    {
        int cnt = 0;
        for (int j = 0; j < v.size(); j++)
        {
            if (v[i] == v[j])
            {
                cnt++;
                if (cnt > v.size() / 3)
                {
                    cout << v[i];
                    return v[i];
                }
            }
        }
    }
    return -1;
}
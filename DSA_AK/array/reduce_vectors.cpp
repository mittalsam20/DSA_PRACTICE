#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> p, pair<int, int> q)
{
    return p.first < q.first;
}
int main()
{
    vector<pair<int, int>> v;
    int a[] = {10, 43, 21, 64, 34, 86, 12, 6, 8, 3};

    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
        v.push_back(make_pair(a[i], i));

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < v.size(); i++)
        a[v[i].second] = i;

    for (int i = 0; i < v.size(); i++)
        cout << a[i] << " ";
}
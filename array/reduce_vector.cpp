#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    pair<int, int> p;
    int a;
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    cout << "you vector ele's are as follows:_";
    for (auto ele : v)
        cout << ele << " ";
}
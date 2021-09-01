#include <iostream>
#include <vector>
using namespace std;

void bruteforce(vector<int> a)
{
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
                cout << a[k];
            cout << endl;
        }
    }
}
// /////////////////////////////////////////////////////////////////////////
void optimalsol(vector<int> a, int start, int end)
{
    if (end == a.size())
        return;
    else if (start > end)
        optimalsol(a, 0, end + 1);
    else
    {
        for (int i = start; i <= end; i++)
            cout << a[i] << " ";
        cout << endl;
        optimalsol(a, start + 1, end);
    }
    return;
}
//////////////////////////////////////////////////////////////////////////////
int main()
{
    int n;
    cout << "Number:-";
    cin >> n;
    vector<int> a(n);
    for (auto &ele : a)
        cin >> ele;
    // bruteforce(a);
    optimalsol(a, 0, 0);
}





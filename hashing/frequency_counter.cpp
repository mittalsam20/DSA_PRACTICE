#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cout << a[i];

    cout << endl;
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        cout << freq[a[i]];

        freq[a[i]]++;
        cout << freq[a[i]];
    }
    cout << endl;

    map<int, int>::iterator it;
    for (it = freq.begin(); it != freq.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}
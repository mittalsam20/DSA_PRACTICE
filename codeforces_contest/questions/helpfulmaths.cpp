#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int l = 0, mid = 0, h = s.length() - 1;
    while (mid <= h)
    {
        if (s[mid] == '1')
        {
            char temp = s[mid];
            s[mid] = s[l];
            s[l] = temp;
            l += 2;
            mid += 2;
        }
        else if (s[mid] == '2')
        {
            mid += 2;
        }
        else
        {
            char temp = s[mid];
            s[mid] = s[h];
            s[h] = temp;
            h -= 2;
        }
    }
    cout << s;
}
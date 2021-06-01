#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    cout << str << endl;
    int c = 0, mx = -1;
    char ans;
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = i + 1; j < str.size(); j++)
        {
            if (str[i] == str[j])
            {
                c++;
                if (c > mx)
                    ans = str[i];
            }
        }
        mx = max(mx, c);
    }
    cout << ans << endl;
    cout << "frequency:-" << mx << endl;
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int indent = 0;
    string s, temp = "", cur;
    getline(cin, s);
    vector<string> v;
    bool flag = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '{' || s[i] == '[')
        {
            cur = s[i];
            v.push_back(cur);
            indent++;
            for (int ic = 0; indent > ic; ic++)
            {
                v.push_back("  ");
            }
        }
        else if (s[i] == '}' || s[i] == ']')
        {
            --indent;
            for (int ic = 0; indent > ic; ic++)
            {
                v.push_back("  ");
            }
            cur = s[i];
            v.push_back(cur);
        }
        else if (s[i] == ' ')
        {
            continue;
        }
        else
        {
            temp += s[i];
            if (s[i] == ',')
            {
                v.push_back(temp);
                temp = "";
            }
            else if (s[i + 1] == '{' || s[i + 1] == '[')
            {
                for (int ic = 0; indent > ic; ic++)
                {
                    v.push_back("  ");
                }
                v.push_back(temp);
                temp = "";
                for (int ic = 0; indent > ic; ic++)
                {
                    v.push_back("  ");
                }
            }
        }
    }
    for (int j = 0; j < v.size(); j++)
    {
        cout << v[j];
        if (v[j] != "  ")
            cout << endl;
    }
}
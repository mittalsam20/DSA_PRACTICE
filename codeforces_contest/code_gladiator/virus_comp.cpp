#include <bits/stdc++.h>
using namespace std;

unordered_set<string> st;
void subsequence(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = str.length(); j > i; j--)
        {
            string sub_str = str.substr(i, j);
            st.insert(sub_str);
            for (int k = 1; k < sub_str.length() - 1; k++)
            {
                string sb = sub_str;
                sb.erase(sb.begin() + k);
                subsequence(sb);
            }
        }
    }
}

int main()
{
    string virus;
    int n;
    cin >> virus;
    cout << virus << endl;
    cin >> n;
    cout << n << endl;
    string comp[n];
    for (int i = 0; i < n; i++)
    {
        cin >> comp[i];
        cout << comp[i] << i << endl;
    }

    subsequence(virus);
    for (int j = 0; j < n; j++)
    {
        bool c = 0;
        for (auto i = st.begin(); i != st.end(); ++i)
        {
            if (*i == comp[j])
            {
                cout << "POSITIVE" << endl;
                c = 1;
            }
        }
        if (c = 0)
            cout << "NEGITIVE" << endl;
    }
}

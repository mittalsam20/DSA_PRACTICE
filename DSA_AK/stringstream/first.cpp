#include <bits/stdc++.h>
using namespace std;
int main()
{
    string full, word;
    full = "hello my first trial with string stream";
    stringstream ss(full);

    while (ss >> word)
    {
        cout << word << endl;
    }
}
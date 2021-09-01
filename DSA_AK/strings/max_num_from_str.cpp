#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    cout << str << endl;
    sort(str.begin(), str.end(), greater<int>());
    cout << str << endl;
}

// why the above code is not working will write a reason later...for sure
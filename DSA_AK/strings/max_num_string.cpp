#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin.ignore();
    getline(cin, str);
    cout << str << endl;
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = i + 1; j < str.size(); j++)
        {
            if ((stoi(str[j])) > (stoi(str[i])))
            {
                int temp = stoi(str[j]);
                stoi(str[j]) = stoi(str[i]);
                stoi(str[i]) = temp;
            }
        }
    }
    cout << str << endl;
}

// why the above code is not working will write a reason later...for sure
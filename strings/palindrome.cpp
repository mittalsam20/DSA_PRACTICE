#include <iostream>
using namespace std;
int main()
{
    char a[100];
    cin >> a;
    int len = 0;
    for (int i = 0; a[i] != '\0'; i++)
        len++;
    cout << len << endl;
    bool flag = 1;
    for (int i = 0; i <= len / 2; i++)
        if (a[i] != a[len - i - 1])
        {
            flag = 0;
        }
    if (flag)
        cout << "IT IS A PALINDROME..!!" << endl;
    else
        cout << "NOT A PALINDROME..!!" << endl;
}
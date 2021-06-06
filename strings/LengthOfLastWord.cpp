/*
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.
If the last word does not exist, return 0.
Note: A word is defined as a character sequence consists of non-space characters only.
Example:
Given s = "Hello World",
return 5 as length("World") = 5.
Please make sure you try to solve this problem without using library functions. Make sure you only traverse the string once.
https://www.interviewbit.com/problems/length-of-last-word/
*/
#include <iostream>
#include <string>
using namespace std;
int large(string s)
{
    int i = 0, ans = 0, cnt = 0;
    while (i < s.size())
    {
        cnt = 0;
        while (s[i] != ' ')
        {
            cnt++;
            if (s[i + 1] == '\0')
                return cnt;
            if (s[i + 1] == ' ')
                ans = cnt;
            i++;
        }
        i++;
    }
    cout << ans;
    return ans;
}

int main()
{
    string s;
    getline(cin, s);
    large(s);
}
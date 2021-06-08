/*
Given a positive integer which fits in a 32 bit signed integer, find if it can be expressed as A^P 
where P > 1 and A > 0. A and P both should be integers.
Example
Input : 4
Output : True  
as 2^2 = 4. 
*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool flag = 0;
    for (int a = 1; a < n; a++)
    {
        for (int p = 2; p < n; p++)
        {
            if (pow(a, p) == n)
            {
                flag = 1;
                cout << a << " " << p;
                return flag;
            }
        }
    }
    if (flag == 0)
        return flag;
}
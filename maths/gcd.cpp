/*Given 2 non negative integers m and n, find gcd(m, n)
GCD of 2 integers m and n is defined as the greatest integer g such that g is a divisor of both m and n.
Both m and n fit in a 32 bit signed integer.
Example
m : 6
n : 9
GCD(m, n) : 3 
 NOTE : DO NOT USE LIBRARY FUNCTIONS 
 */

#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int dividend = x > y ? x : y;
    int divisor = x > y ? y : x;
    while (divisor != 0)
    {
        int rem = dividend % divisor;
        dividend = divisor;
        divisor = rem;
    }
    return dividend;
}
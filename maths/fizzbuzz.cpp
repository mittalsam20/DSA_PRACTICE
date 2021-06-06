/*
Given a positive integer N, print all the integers from 1 to N. But for multiples of 3 print “Fizz” instead of the
number and for the multiples of 5 print “Buzz”. Also for number which are multiple of 3 and 5, prints “FizzBuzz”.
Example
N = 5
Return: [1 2 Fizz 4 Buzz]
Note: Instead of printing the answer, you have to return it as list of strings.
https://www.interviewbit.com/problems/fizzbuzz/
*/
#include <iostream>
#include <string>
using namespace std;

string fizzbuzz(int n)
{
    string s = "";
    cout << s << endl;
    for (int i = 1; i <= n; i++)
    {
        // cout << i << endl;
        if (i % 15 == 0)
            s.append("FizzBuzz");
        else if (i % 3 == 0)
            s.append("Fizz");
        else if (i % 5 == 0)
            s.append("Buzz");
        else
            s.append(to_string(i));
    }
    return s;
}
int main()
{
    int n;
    cin >> n;
    fizzbuzz(n);
}
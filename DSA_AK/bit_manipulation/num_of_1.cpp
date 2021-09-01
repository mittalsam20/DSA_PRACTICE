#include <iostream>
using namespace std;
bool number_of_1(int n)
{
    return (!(n & (n - 1)));
}
int main()
{
    int n, c = 0;
    cout << "Number:-";
    cin >> n;

    while (n & (n - 1))
    {
        c++;
        n--;
    }
    cout << "NUMBER OF 1 is:- " << c << endl;
}
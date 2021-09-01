#include <iostream>
#include <string>
using namespace std;

string fact(long long int n)
{
    int temp = n;
    if (n == 0)
        return to_string(1);
    for (int i = 1; i < temp; i++)
    {
        n = n * i;
        cout << n << endl;
    }
    return to_string(n);
}
abort

    int
    main()
{
    long long int n;
    cin >> n;
    fact(n);
    right_fact(n);
}
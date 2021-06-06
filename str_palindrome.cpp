#include <iostream>
#include <string>
using namespace std;

int pal(string A)
{
    for (int i = 0; i < A.length(); i++)
        A[i] = tolower(A[i]);

    int l = 0;
    int h = A.length();

    while (l <= h)
    {
        if (!(A[l] >= 'a' && A[l] <= 'z') && !(A[l] >= '0' && A[l] <= '9'))
            l++;
        else if (!(A[h] >= 'a' && A[h] <= 'z') && !(A[h] >= '0' && A[h] <= '9'))
            h--;
        else if (A[l] == A[h])
        {
            l++;
            h--;
        }
        else
            return 0;
    }
    return 1;
}
int main()
{
    string a;
    cin >> a;
    cout << pal(a);
}
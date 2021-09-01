#include <iostream>
using namespace std;
int main()
{
    int mx = n[0], t = 0;
    for (int i = 0; i < n.size(); i++)
    {
        t += n[i];
        mx = max(mx, t);
        if (t < 0)
        {
            t = 0;
        }
    }
    return mx;
}
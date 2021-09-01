#include <iostream>
#include <string>
using namespace std;
int main()
{
    string jewels, stones;
    cin >> jewels >> stones;
    int ans = 0;
    for (int i = 0; i < jewels.size(); i++)
    {
        for (int j = 0; j < stones.size(); j++)
        {
            if (jewels[i] == stones[j])
                ans++;
        }
    }
    cout << ans << endl;
}
class Solution
{
public:
    int maxSubArray(vector<int> &n)
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
};
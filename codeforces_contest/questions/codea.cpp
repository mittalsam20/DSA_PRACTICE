#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> A;
    A.push_back(1);
    A.push_back(3);
    A.push_back(2);
    A.push_back(15);
    A.push_back(4);
int sum=0;
vector<int> ans;
ans.push_back(0);
// sort(A.begin(),A.end());
for(int i=0;i<A.size()-1;i++)
{
    sum+=A[i];
    ans.push_back(sum);
    // cout<<ans[i];
}
sum=0;   
for(auto ele:ans)
   sum+=ele;
// return sum;
}
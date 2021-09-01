#include<iostream>
#include<vector>
using namespace std;


int func(int n,int states,int month,int a[])
{
int rows=n/states;
int ans[rows][states];
int it=0;
for(int i=0;i<rows;i++)
{
    for(int j=0;j<states;j++)
    {
        ans[i][j]=a[it];
        it++;
    }
}
for (int i = 0; i < rows; i++)
    sort(ans[i], ans[i] + n);

for(int i=0;i<rows;i++)
{
    for(int j=0;j<states;j++)
    {
            
    }
}
}

int main()
{
int n,states,month;
cin>>n>>states>>month;
int a[n];
func(n,states,month,a);
}


int maxdist(string& str)
{
    int n = input1.length();
    int res = -1;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (input1[i] == input1[j])
                res = max(res, abs(j - i - 1));
    return res;
}
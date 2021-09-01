#include<iostream>
#include<vector>
using namespace std;

int main(){
int t;
cin>>t;
vector<int> a;
for(int i=1;i<2500;i++)
{
 if(i%3==0 || i%10==3)  continue;
 else a.push_back(i);
}

while(t)
{
    int n;
    cin>>n;
    cout<<a[n-1];
t--;
}
}
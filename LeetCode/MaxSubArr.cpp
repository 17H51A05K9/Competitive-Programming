#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    long long  sum=INT_MIN,ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(sum<0)
        {
        sum=0;
        }
        sum+=a[i];
        
        ans=max(ans,sum);
    }
    cout<<ans;
}
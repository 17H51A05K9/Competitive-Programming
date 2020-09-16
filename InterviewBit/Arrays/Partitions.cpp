#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    int sum=0;
    for(int i=0;i<n;i++)
   { cin>>v[i];sum+=v[i];}
   int temp=sum/3;
    int pre[n+1];
    pre[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--)
    {
        pre[i]=v[i]+pre[i+1];
    }
    int t[n];
    for(int i=0;i<n;i++)
    {
        if(temp==pre[i])
        t[i]=1;
        else
        {
            t[i]=0;
        }
        
    }
    // for(int i=0;i<n;i++)
    // cout<<t[i];
  //  cout<<temp;
    sum=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        if(sum==temp)
        {
           for(int j=i+1;j<n;j++)
           {
               if(t[j]==1)
               ans++;
           }
        }
    }
    cout<<ans;
}
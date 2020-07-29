#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    int target=v[k-1];
    // if(target==0)
    // {
    //     cout<<0;
    // }
    // else
    {
        int ans=0;
        for(int i=0;i<v.size();i++)
        {
           if(v[i]>=target && v[i]!=0)
           ans++;
           else
           {
               break;
           }
           
        }
        cout<<ans;
    }
    
}
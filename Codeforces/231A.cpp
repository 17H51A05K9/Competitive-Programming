#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int ans=0;
    while(t--)
    {
       int c=0;
       for(int i=0;i<3;i++)
       {
           int e;
           cin>>e;
           if(e==1)
           c++;
       }
       if(c>=2)
       ans++;
    }
    cout<<ans;
}
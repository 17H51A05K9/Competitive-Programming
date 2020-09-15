#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+2];
        map<int,int> m;
        for(int i=1;i<=n-1;i++)
        {cin>>a[i];m[a[i]]++;}
       for(int i=1;i<=n;i++)
       {
           if(m[i]==0)
           {
               cout<<i<<"\n";
               break;
           }
       }
    }
}
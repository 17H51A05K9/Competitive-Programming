#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        int f=0;
        while(1)
        {
           if(p==0 and n>0)
           {
               cout<<0<<"\n";
               break;
           }
           else if(n<=0 and p!=0)
           {
               cout<<1<<"\n";
               break;
           }
           n=n-p;
           p=p/2;
        }
    }
}
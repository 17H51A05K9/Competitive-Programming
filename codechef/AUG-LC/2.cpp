#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n,k;
        cin>>n>>k;   
            long ans1=INT_MAX,ans2=INT_MAX,f=0;
            for(int i=0;i<n;i++)
            {
                long e;
                cin>>e;
                if(k%e==0)
                {
                    long small=k/e;
                    if(small<ans1)
                    {
                        ans1=small;
                        ans2=e;
                        f=1;
                    }
                }
           }
           if(f==0)
                cout<<"-1\n";
                else
                {
                    cout<<ans2<<"\n";
                }  
        
    }
}
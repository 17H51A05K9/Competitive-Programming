#include<bits/stdc++.h>
using namespace std;
int foo(long p)
{
   int a[]={1,2,3,4,5,6,7,8,9};
   int c=0,i=8;
    while(i>=0)
    {
       int l1=p/a[i];
    //   cout<<l1<<" ";
       c=c+l1;
       int l2=p%a[i];
       if(l2==0)
       return c;
       p=l2;
       if(l2<a[i])
       i--;
    }
    return c;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long pc,pr;
        cin>>pc>>pr;
        string s1,s2;
        s1=to_string(pc);
        s2=to_string(pr);
        if(s1.size()==1 || s2.size()==1)
        {
            if(s1.size()==1 && s2.size()==1)
            {
                cout<<1<<" "<<1<<"\n";
                continue;
            }
            else if(s1.size()==1)
            {
                cout<<0<<" "<<1<<"\n";
                continue;
            }
            else if(s2.size()==1)
            {
                 cout<<1<<" "<<1<<"\n";
                continue;
            }
        }
        else
        {
            long ans1=foo(pc);
            long ans2=foo(pr);
          //  cout<<ans1<<" "<<ans2<<"\n";
            if(ans1==ans2)
            {
                cout<<1<<" "<<1<<"\n";
                continue;
            }
            else if(ans1<ans2)
            {
                cout<<0<<" "<<ans1<<"\n";
            }
            else
            {
                cout<<1<<" "<<ans2<<"\n";
            }
            
        }
        
    }
}
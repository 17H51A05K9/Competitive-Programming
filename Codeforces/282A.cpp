#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   int ans=0;
   vector<string> v;
   int f=0;
   while(t--)
   {
       string s;
       cin>>s;
      if(s[0]=='+')
      {
        ++ans;
      }
      else if(s[2]=='+')
      {
        if(t==0)
        {f=1;
            cout<<ans+1;
            break;
        }
        else
        {
            ans++;
        }
        
      }
      else if(s[0]=='-')
      {
          --ans;
      }
      else if(s[2]=='-')
      {
           if(t==0)
        {f=1;
            cout<<ans-1;
            break;
        }
        else
        {
            ans--;
        }
      }
     // cout<<ans<<"\n";
   }
   if(f==0)
   cout<<ans;
   
    
}
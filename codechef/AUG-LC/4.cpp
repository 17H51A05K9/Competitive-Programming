#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        string s4=s2;
        sort(s1.begin(),s1.end());
        cout<<s1<<"\n";
        map<char,int> m;
        for(int i=0;i<s1.size();i++)
        {
            m[s1[i]]++;
        }
        for(int j=0;j<s2.size();j++)
        {
           m[s2[j]]--;
        }
        string s3;
        for(auto i:m)
        {
            int k=i.second;
            while(k--)
            {
                s3+=i.first;
            }
        }
        cout<<s3<<"\n";
        string ans,ans1;
        
       int f=0;
       for(int i=0;i<s3.size();i++)
       {
           if(s3[i]>=s2[0] && f==0)
           {
               ans+=s2;
               f=1;
           }
           
           ans+=s3[i];
       }
       f=0;
       for(int i=s3.size()-1;i>=0;i--)
       {
           if(s3[i]<=s2[0] && f==0)
           {
               reverse(s2.begin(),s2.end());
               ans1+=s2;
               f=1;
           }
           ans1+=s3[i];
       }
       reverse(ans1.begin(),ans1.end());
    //    cout<<ans<<" "<<ans1<<"\n";
       if(ans.size()==s3.size())
       {
           ans=min(s4+ans,ans+s4);
        //    cout<<ans<<"\n";
       }
       if(ans1.size()==s3.size())
       {
           ans1=min(s4+ans1,ans1+s4);
       }
       cout<<ans<<" "<<ans1<<"\n";
       cout<<min(ans,ans1)<<"\n";
    }
}
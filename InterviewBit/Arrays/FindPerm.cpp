#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    vector<int> v;
   // v.push_back(1);
    map<int,int> m;
    int k=n,c=1;
   // m[1]++;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]=='I' && s[i+1]=='D')
        {
          if(v.size()==0)
          {
              v.push_back(c);
              c++;
          }
          v.push_back(k);
          k--;
        }
        else if(s[i]=='D' && s[i+1]=='I')
        {
          if(v.size()==0)
          {
              v.push_back(k);
              k--;
          }
         
          v.push_back(c); 
           c++;
        }
        else if(s[i]=='I')
        {
            if(v.size()==0)
            {v.push_back(c);c++;}
               v.push_back(c);
                c++;
        }
        else
        {
            if(v.size()==0)
           { v.push_back(k);k--;}
            
               v.push_back(k);
               k--;
        }
        
    }
    for(int i=0;i<v.size();i++)
   {
       m[v[i]]++;
   }
   for(int i=1;i<=n;i++)
   if(m[i]==0)
   {
       v.push_back(i);
       break;
   }
   for(int i=0;i<v.size();i++)
   cout<<v[i]<<" ";
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    int c=1;
    vector<int> ans;
    for(int i=v.size()-1;i>=0;i--)
    {
      int k=v[i]+c;
      if(k>9)
      {
          ans.push_back(k%10);
          c=k/10;
      }
      else
      {
          ans.push_back(k);
          c=0;
      }
      
    }
    if(c)
    {
        ans.push_back(c);
    }
    reverse(ans.begin(),ans.end());
    vector<int> ans1;
    int v1=0;
    for(int i=0;i<ans.size();i++)
    {
        if(ans[i]==0 && v1==0)
        {
           continue;
        }
        ans1.push_back(ans[i]);
        v1=1;
    }
    for(int i=0;i<ans1.size();i++)
    cout<<ans1[i];
}
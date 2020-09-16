#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    string s1,s2;
    s1=to_string(a);
    s2=to_string(b);
     return stoll(s1+s2)>stoll(s2+s1);
}
int main()
{
   int n;
   cin>>n;
   vector<int> v(n);
   for(int i=0;i<n;i++)
   cin>>v[i];
   sort(v.begin(),v.end(),cmp);
   string ans;
   for(int i=0;i<n;i++)
   ans+=to_string(v[i]);
   cout<<ans;
}
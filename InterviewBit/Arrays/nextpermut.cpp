#include<bits/stdc++.h>
using namespace std;
int foo(int i,int j,vector<int> v,int key)
{
   int ans=-1;
   while(i<=j)
   {
       int mid=(i+j)/2;
       cout<<mid;
       if(v[mid]>key)
       {
           i=mid+1;
        if(ans==-1 || v[ans]>=v[mid])
        ans=mid;
       }
       else
       {
           j=mid-1;
       }   
   }
   return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    int c=0;
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]>v[i+1])
        c++;
    }
    for(int i=v.size()-2;i>=0;i--)
    {
        if(v[i]<v[i+1])
        {
            int e=foo(i+1,v.size(),v,v[i]);
            //cout<<e;
            swap(v[i],v[e]);
           reverse(v.begin()+i+1,v.end());
            break;
        }
    }
    if(c==v.size()-1)
    {
        sort(v.begin(),v.end());
    }
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}
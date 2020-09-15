#include<bits/stdc++.h>
using namespace std;
// long long kadane(vector<int> a,int n)
// {
//    long long  sum=INT_MIN,ans=INT_MIN;
//     int c=0;
//     for(int i=0;i<n;i++)
//     {
//         if(sum<0)
//         {
//         sum=0;
//         }
//         sum+=a[i];
//         ans=max(ans,sum);
//     }
//         return ans;
// }
int main()
{
   int n,k;
   cin>>n>>k;
   vector<int> a(n);
   for(int i=0;i<n;i++)
   cin>>a[i];
   long long  sum=INT_MIN,ans=INT_MIN;
  //  int c=0,index=-1,c1=0;
    for(int i=0;i<n*k;i++)
    {
       if(sum<0)
        {
        sum=0;
        }
        sum+=a[i%n];
        
        ans=max(ans,sum);
       // i=i%n;
    }
  cout<<ans%10000000007;
}
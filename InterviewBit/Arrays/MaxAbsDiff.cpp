#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    int max1=INT_MIN,min1=INT_MAX,max2=INT_MIN,min2=INT_MAX;
    for(int i=0;i<n;i++)
    {
        max1=max(max1,v[i]+i);
        min1=min(min1,v[i]+i);
        max2=max(max2,v[i]-i);
        min2=min(min2,v[i]-i);
    }
    cout<<max(max1-min1,max2-min2);
}
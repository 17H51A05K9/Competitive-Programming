#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int ans=INT_MIN;
    int exit=0,enter=0;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        enter=enter-a;
        enter=enter+b;
        ans=max(ans,enter);
    }
    cout<<ans;
}
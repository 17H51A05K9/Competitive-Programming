#include<bits/stdc++.h>
using namespace std;
int main()
{
    long a,b,c;
    cin>>a>>b>>c;
    long long a1=(c*(c+1))/2;
    if((a*a1)-b >0)
    cout<<(a*a1)-b;
    else
    {
        cout<<0;
    }
    
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    queue<long long int> q;
    q.push(1);
    long long ans=INT_MAX;
    string a="",b="",ans1="";
    while(!q.empty() && b.length()!=10)
    {
       // cout<<1;
        long long int k=q.front();
        q.pop();
        a=to_string(k)+"1";
        b=to_string(k)+"0";
        long long int x=stoi(a),y=stoi(b);
        //cout<<x<<" "<<y<<"\n";
        if(x%n==0)
        {
            if(x<=ans && x>=n)
            {
                ans=x;
                ans1=a;
            }
        }
        if(y%n==0)
        {
            if(y<=ans && y>=n)
            {
                ans=y;
                ans1=b;
            }
        }
        q.push(x);
        q.push(y);
    }
    cout<<ans1;
}
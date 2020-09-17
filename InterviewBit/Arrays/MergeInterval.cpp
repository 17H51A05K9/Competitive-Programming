#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> p1,pair<int,int> p2)
{
    if(p1.first==p2.first)
    return p1.second<p2.second;
    return p1.first<p2.first;
}
int main()
{
    int n;
    int a,b;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    //cin>>a>>b;
    //v.push_back(make_pair(a,b));
    sort(v.begin(),v.end(),cmp);
    // for(int i=0;i<v.size();i++)
    // cout<<v[i].first<<" "<<v[i].second<<"\n";
    stack<pair<int,int>> s;
    s.push(make_pair(v[0].first,v[0].second));
    for(int i=1;i<v.size();i++)
    {
        auto top=s.top();
        if(v[i].first<=top.second)
        {
            s.top().second=max(v[i].second,top.second);
        }
        else
        {
            s.push(v[i]);
        }
        
    }
    vector<pair<int,int>> ans;
    while(!s.empty())
    {
       ans.push_back(make_pair(s.top().first,s.top().second));
        s.pop();
    }
    sort(ans.begin(),ans.end(),cmp);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<"\n";
    }
}
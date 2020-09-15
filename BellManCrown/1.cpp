#include<bits/stdc++.h>
using namespace std;
vector<pair<string,string>> se;
bool cmp(pair<string,string> &p1,pair<string,string> &p2)
{
    if(p1.first==p2.first)
    return p1.second<p2.second;
    return p1.first<p2.first;
}
 bool vis[1001][1001];
 char a[1000][1000];
 int n,m;
void foo(int i,int j,string s,string dir)
{
    if(i<0 || j<0 || i>=n || j>=m ||vis[i][j]==true)
    return;
    if(i==n-1 && j==m-1)
    {
          se.push_back(make_pair(s,dir));
          dir.pop_back();
          return;
    }
     vis[i][j]=true;
    foo(i,j+1,s+a[i][j],dir+"R");
    foo(i+1,j,s+a[i][j],dir+"D");
    vis[i][j]=false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int j=1;
    while(t--)
    {
        cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
  
    memset(vis,0,sizeof(vis));
    foo(0,0,"","");
    sort(se.begin(),se.end(),cmp);
    cout<<"Case #"<<j<<": "<<se[0].second<<"\n";
    se.clear();
    j++;
    }
}
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
    
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,m;
//         cin>>n>>m;
//         queue<pair<int,int>> q;
//         char a[n][m];
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 cin>>a[i][j];
//             }
//         }
//         vector<pair<string,string>> v;
//         string s1,s2;
//         q.push(make_pair(0,0));
//         s1+=a[0][0];
//         while(!q.empty())
//         {
            
//         }
//     }
// }
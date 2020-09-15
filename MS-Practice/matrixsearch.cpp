#include<bits/stdc++.h>
using namespace std;

bool foo(char a[51][51],int i,int j,int n,int m,string s1,string s2,bool vis[100][100])
{//cout<<1;
    if(i<0 || j<0 || i>=n || j>=m || vis[i][j]==true)
    return false;
    cout<<s2<<"\n";
    if(s1==s2)
    {cout<<1;
        return true;}
    vis[i][j]=true;
    return foo(a,i+1,j,n,m,s1,s2+a[i][j],vis)||foo(a,i,j+1,n,m,s1,s2+a[i][j],vis)||foo(a,i-1,j,n,m,s1,s2+a[i][j],vis)|| foo(a,i,j-1,n,m,s1,s2+a[i][j],vis);
    vis[i][j]=0;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,m,q;
    cin>>n>>m>>q;
    char a[51][51];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    getchar();
    while(q--)
    {
       string s;
       cin>>s;
       bool vis[100][100];
       memset(vis,0,sizeof(vis));
       
       if(foo(a,0,0,n,m,s,"",vis))
       cout<<"Yes\n";
       else
       {
           cout<<"No\n";
       }  
    }
    }
   
}
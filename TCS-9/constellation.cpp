#include<bits/stdc++.h>
using namespace std;
bool A(int i,vector<vector<char>> &v1,int n)
{
    if(i>n || i+1 >n || i+2 >n)
    return 0;
    if(v1[0][i]=='#' || v1[0][i+1]=='#' || v1[0][i+2]=='#')
    return 0;
    if(v1[0][i]=='.' && v1[0][i+1]=='*' && v1[0][i+2]=='.' && v1[1][i]=='*' && v1[1][i+1]=='*' && v1[1][i+2]=='*' && v1[2][i]=='*' && v1[2][i+1]=='.' && v1[2][i+2]=='*')
    return 1;
    return 0;
}
bool E(int i,vector<vector<char>> &v1,int n)
{
    if(i>n || i+1 >n || i+2 >n)
    return 0;
    if(v1[0][i]=='#' || v1[0][i+1]=='#' || v1[0][i+2]=='#')
    return 0;
    if(v1[0][i]=='*' && v1[0][i+1]=='*' && v1[0][i+2]=='*' && v1[1][i]=='*' && v1[1][i+1]=='*' && v1[1][i+2]=='*' && v1[2][i]=='*' && v1[2][i+1]=='*' && v1[2][i+2]=='*')
    return 1;
    return 0;
}
bool I(int i,vector<vector<char>> &v1,int n)
{
    if(i>n || i+1 >n || i+2 >n)
    return 0;
    if(v1[0][i]=='#' || v1[0][i+1]=='#' || v1[0][i+2]=='#')
    return 0;
    if(v1[0][i]=='*' && v1[0][i+1]=='*' && v1[0][i+2]=='*' && v1[1][i]=='.' && v1[1][i+1]=='*' && v1[1][i+2]=='.' && v1[2][i]=='*' && v1[2][i+1]=='*' && v1[2][i+2]=='*')
    return 1;
    return 0;
}
bool O(int i,vector<vector<char>> &v1,int n)
{
    if(i>n || i+1 >n || i+2 >n)
    return 0;
    if(v1[0][i]=='#' || v1[0][i+1]=='#' || v1[0][i+2]=='#')
    return 0;
    if(v1[0][i]=='*' && v1[0][i+1]=='*' && v1[0][i+2]=='*' && v1[1][i]=='*' && v1[1][i+1]=='.' && v1[1][i+2]=='*' && v1[2][i]=='*' && v1[2][i+1]=='*' && v1[2][i+2]=='*')
    return 1;
    return 0;
}
bool U(int i,vector<vector<char>> &v1,int n)
{
    if(i>n || i+1 >n || i+2 >n)
    return 0;
    if(v1[0][i]=='#' || v1[0][i+1]=='#' || v1[0][i+2]=='#')
    return 0;
    if(v1[0][i]=='*' && v1[0][i+1]=='.' && v1[0][i+2]=='*' && v1[1][i]=='*' && v1[1][i+1]=='.' && v1[1][i+2]=='*' && v1[2][i]=='*' && v1[2][i+1]=='*' && v1[2][i+2]=='*')
    return 1;
    return 0;
}
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<vector<char>> v1;
    vector<char> v2;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<n;j++)
        {
            char c;
            cin>>c;
            v2.push_back(c);
        }
        v1.push_back(v2);
        v2.clear();
    }
    string ans;
   
        for(int j=0;j<n;j++)
        {
           if(v1[0][j]=='#')
           {
               ans=ans+'#';
               //j=j+2;
               continue;
           }
           if(A(j,v1,n))
           {
               ans=ans+'A';
               j=j+2;
               continue;
           }
           if(E(j,v1,n))
           {
               ans=ans+'E';
               j=j+2;
               continue;
           }
           if(I(j,v1,n))
           {
               ans=ans+'I';
               j=j+2;
               continue;
           }
           if(O(j,v1,n))
           {
               ans=ans+'O';
               j=j+2;
               continue;
           }
           if(U(j,v1,n))
           {
               ans=ans+'U';
               j=j+2;
               continue;
           }
        }
        cout<<ans;
}
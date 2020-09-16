#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> v;
    vector<int> v1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int e;
            cin>>e;
           v1.push_back(e);
        }
        v.push_back(v1);
        v1.clear();
    }
  
   for(int i=0;i<v.size();i++)
   {
       for(int j=0;j<v[i].size();j++)
       {
           cout<<v[i][j]<<" ";
       }
       cout<<"\n";
   }
}
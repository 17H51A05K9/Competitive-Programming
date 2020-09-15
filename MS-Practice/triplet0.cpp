#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        vector<int> v;
        int i=0;
        vector<vector<int>> v1;
       set<vector<int>> m;
        while(i<n-2)
        {
            int a1=a[i],j=i+1,k=n-1;
           // cout<<1;
            while(j<k)
            {
                if(a1+a[j]+a[k] == 0)
                {
                   v.push_back(a1);
                     v.push_back(a[j]);
                     v.push_back(a[k]);
                    sort(v.begin(),v.end());
                    string s;
                   // s=to_string(v[0])+" "+to_string(v[1])+" "+to_string(v[2]);
                   m.insert(v);
                    j++;
                    k--; 
                    v.clear();
                }
                else if(a1+a[j]+a[k] < 0)
                j++;
                else
                {
                    k--;
                }
                
            }
          
            
            i++;
        }
        if(m.size()==0)
        {
            cout<<m.size();
            continue;
        }
        if(t!=0)
        cout<<m.size()<<"\n";
        else
        {
            cout<<m.size()<<"\n";
        }
        
        int k=0;
      for(auto i:m)
      {
          for(int j=0;j<i.size();j++)
          {
              cout<<i[j]<<" ";
          }
          cout<<"\n";
      }
    }
}
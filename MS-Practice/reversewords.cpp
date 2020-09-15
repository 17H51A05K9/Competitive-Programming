#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream s1(s);
    string s2;
    vector<string> v;
    while(s1>>s2)
    {
        reverse(s2.begin(),s2.end());
      v.push_back(s2);
    }
    for(int i=0;i<v.size()-1;i++)
    cout<<v[i]<<" ";
    cout<<v[v.size()-1];
}
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
 string s;
 cin>>s;
 sort(s.begin(),s.end());
 if(s.size()==1)
 cout<<s[0];
 else
 {int c=0;
     for(int i=0;i<s.size();i++)
     {
         if(s[i]>='1' && s[i]<='9')
        { cout<<s[i];
        if(i!=s.size()-1)
        cout<<"+";}
       
     }
 }
 
} 
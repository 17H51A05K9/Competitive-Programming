#include<bits/stdc++.h>
using namespace std;
int main(void)
{
 string s1,s2;
 cin>>s1>>s2;
 for(int i=0;i<s1.size();i++)
 {
    if(s1[i]>='A' && s1[i]<='Z')
    s1[i]=s1[i]+32;
    if(s2[i]>='A' && s2[i]<='Z')
    s2[i]=s2[i]+32;
 }int f=0;
 for(int i=0;i<s1.size();i++)
 {
     if(s1[i]!=s2[i])
     {
         f=1;
         break;
     }
 }
 /*for(int i=0;i<s1.size();i++)
 cout<<s1[i];
 cout<<"\n";
 for(int i=0;i<s2.size();i++)
 cout<<s2[i];*/
 if(f==1)
 {
     if(s1<s2)
     cout<<"-1";
     else
     {
         cout<<"1";
     }
     
 }
 else
 {
     cout<<"0";
 }
 
} 
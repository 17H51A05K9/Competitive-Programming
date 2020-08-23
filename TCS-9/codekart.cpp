#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        map<string,long> m;
        map<string,double> m1;
        map<string,long> m2;
        map<string,string> m3;
        string s;
        getline(cin,s);
        double ans=0;
        while(s!="END")
        {
            stringstream s1(s);
            string s2;
            vector<string> v;
            while(s1>>s2)
            {
                v.push_back(s2);
            }
           if(v[1]=="SM")
           {
               if(v[2]=="ADD")
               {
                   long e=stoll(v[4]);
                   if(e<=0 || m[v[3]]!=0)
                   {
                       cout<<"-1"<<"\n";
                       //continue;
                   }
                   else
                   {
                       m[v[3]]+=e;
                       cout<<e<<"\n";
                   }
               }
               else if(v[2]=="REMOVE")
               {
                   if(m[v[3]]==0)
                   {
                       cout<<"-1\n";
                       //continue;
                   }
                   else
                   {
                       m.erase(v[3]);
                       cout<<1<<"\n";
                      // continue;
                   }   
               }
               else if(v[2]=="GET_QTY")
               {
                   if(m[v[3]]==0)
                   {
                       cout<<0<<"\n";
                      // continue;
                   }
                   else
                   {
                       cout<<m[v[3]]<<"\n";
                      // continue;
                   }   
               }
               else if(v[2]=="INCR")
               {
                   long e=stoll(v[4]);
                   if(e<=0 || m[v[3]]==0)
                   {
                       cout<<"-1"<<"\n";
                      // continue;
                   }
                   else
                   {
                       m[v[3]]+=e;
                       cout<<e<<"\n";
                       //continue;
                   }
               }
               else if(v[2]=="DCR")
               {
                   long e=stoll(v[4]);
                   if(e<=0 || m[v[3]]==0)
                   {
                       cout<<"-1"<<"\n";
                      // continue;
                   }
                   else
                   {
                       m[v[3]]-=e;
                       if(m[v[3]]<=0)
                       {
                           cout<<"-1\n";
                           m[v[3]]=0;
                           //continue;
                       }
                       else
                       {
                           cout<<e<<"\n";
                       }
                       
                       //continue;
                   }
               }
               else if(v[2]=="SET_COST")
               {
                   double e=stod(v[4]);
                   if(e<=0)
                   cout<<"-1\n";
                   else
                   {
                       m1[v[3]]=e;
                       printf("%.1f\n",e);
                   }
                   
               }
           }
           else if(v[1]=="S")
           {
               if(v[2]=="ADD")
               {
                   long e=stoll(v[4]);
                   if(e<=0 || m2[v[3]]!=0)
                   {
                       cout<<"-1"<<"\n";
                      // continue;
                   }
                   else
                   {
                      if(m1[v[3]]==0 || m1[v[3]]<e )
                      {
                          cout<<"-1\n";
                          //continue;
                      }
                      else {
                        m[v[3]]-=e;
                        m2[v[3]]+=e;
                        ans+=(double)e*m1[v[3]];
                       // cout<<ans<<" ";
                        cout<<e<<"\n";
                      }
                   }
                   
               }
               else if(v[2]=="REMOVE")
               {
                   if(m2[v[3]]==0)
                   {
                       cout<<"-1\n";
                       //continue;
                   }
                   else
                   {
                       ans-=m1[v[3]]*m2[v[3]];
                       if(ans<0)
                       ans=0;
                      // cout<<ans<<" ";
                       m2.erase(v[3]);
                       cout<<1<<"\n";
                      // continue;
                   }   
               }
               else if(v[2]=="INCR")
               {
                   long e=stoll(v[4]);
                   if(e<=0 || m2[v[3]]==0)
                   {
                       cout<<"-1"<<"\n";
                      // continue;
                   }
                   else
                   {
                       ans+=e*m1[v[3]];
                      m2[v[3]]+=e;
                     // cout<<ans<<" ";
                      cout<<e<<"\n";
                   }
               }
               else if(v[2]=="DCR")
               {
                   long e=stoll(v[4]);
                   if(e<=0 || m2[v[3]]<e)
                   {
                       cout<<"-1"<<"\n";
                      // continue;
                   }
                   else
                   {
                       ans-=e*m1[v[3]];
                       if(ans<0)
                       ans=0;
                       m2[v[3]]-=e;
                       if(m2[v[3]]<=0)
                       {
                           cout<<"-1\n";
                           m2[v[3]]=0;
                       }
                       else
                       {
                           cout<<e<<"\n";
                       }
                       
                   }
               }
               else if(v[2]=="GET_ORDER_AMOUNT")
               {
                   if(ans<=0)
                   {
                       cout<<"-1"<<"\n";
                   }
                   else
                   {
                       printf("%.2f\n",ans);
                   }
                   
                  
               }
           }
           getline(cin,s);
           v.clear();
        }
    }
}
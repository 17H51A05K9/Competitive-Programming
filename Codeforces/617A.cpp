#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[]={1,2,3,4,5};
    int c=0;
    int i=4;
    while(n!=0 && i>=0)
    {
       if(n>=a[i])
       {
           n=n-a[i];
           c++;
       }
       else
       {
           i--;
       }
    }
    cout<<c;
}
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
 int a[5][5],k1,k2;
 for(int i=0;i<5;i++)
 for(int j=0;j<5;j++)
 {cin>>a[i][j];
 if(a[i][j]==1){
     k1=i;
 k2=j;
 }}
 cout<<abs(k1-2)+abs(k2-2);
} 
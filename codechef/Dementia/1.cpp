#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
void F() {
    ll n;
    cin>>n;
    if(n<=2) {
        cout<<"first\n";
        return;
    }
    vector<ll> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    sort(v.begin(),v.end());
    ll s1 =0,s2 =0;
    s1 =s1+ v[v.size()-1];
    s2 =s2+v[v.size()-2] + v[v.size()-3];
    int f=1;
    for(int i=n-4;i>=0;i--) {
        if(f){
            s1 =s1+ v[i];
        }
        else {
            s2 =s2+ v[i];
        }
        f^=1;
    }
    if(s1 == s2) {
        cout<<"draw\n";
        return ;
    }
    else if(s1 > s2){
        cout<<"first\n";
        return ;
    }
    else {
        cout<<"second\n";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        F();
    }
}
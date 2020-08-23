#include<bits/stdc++.h>
using namespace std;
int main()
{
    fstream f;
    f.open("a.txt");
    //stringstream s1=f;
    string s;
    while(f>>s)
    {
        cout<<s<<"\n";
    }
}
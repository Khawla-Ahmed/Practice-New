//22-10-2023
//https://codeforces.com/problemset/problem/978/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cunt=0;
    cin>>n;
    string s,s1;
    cin>>s;
    s1="xxx";
    for(int i=0;i<n;i++)
    {
        s1=s.substr(i,3);
        if(s1=="xxx")
        {
            cunt++;
        }
    }
    cout<<cunt<<endl;
    return 0;
}

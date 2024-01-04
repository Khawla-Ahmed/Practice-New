//Khawla_Ahmed
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    string s;
    map<string,bool>mp;
    for(int i=0;i<n;i++)
    {
        cin>>s;

        if(mp[s]==1)cout<<"YES\n";
        else cout<<"NO\n";

        mp[s]=1;


    }




    return 0;
}

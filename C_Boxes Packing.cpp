//Khawla_Ahmed
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,cunt=0;
    cin>>n;
    ll arr[n];
    map<ll,ll>mp;
    ll maxx=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
        if(maxx<mp[arr[i]]) maxx=mp[arr[i]];
    }
    cout<<maxx<<endl;
    return 0;
}


//Khawla_Ahmed
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    string s;
    map<string,ll>mp;
    for(ll i=0;i<n;i++)
    {
        cin>>s;
        if(mp[s]==0)
        {
            cout<<"OK\n";
            mp[s]++;
        }
        else
        {
            cout<<s<<mp[s]<<"\n";
            mp[s]++;
        }

    }



    return 0;
}

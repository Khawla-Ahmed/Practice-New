//Khawla_Ahmed
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n+10];
        map<ll,ll>mp;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        ll arrsize=n;

        ll i=0;
        while(arrsize>mp.size())
        {
            mp[arr[i]]--;
            if(mp[arr[i]]==0) mp.erase(arr[i]);
            arrsize--;
            i++;
        }
        cout<<i<<endl;
    }
    return 0;
}

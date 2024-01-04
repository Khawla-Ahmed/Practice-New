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
        string s;
        cin>>s;
        map<char,ll>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
       /* for(auto it:mp)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }*/
        ll c=0;
        for(auto it:mp)
        {
            if(it.second>=(it.first-'A'+1)) c++;
        }
        cout<<"result : "<<c<<endl;
    }

    return 0;
}

//Khawla_Ahmed
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    cin>>n>>m;
    string sn,si;
    map<string,string>mp;
    for(int i=0;i<n;i++)
    {
        cin>>sn>>si;
        si=si+";";
        mp[si]=sn;
        //cout<<"RESUTL : "<<mp[si]<<endl;
    }


    for(int i=0;i<m;i++)
    {
        cin>>sn>>si;
       // cout<<si<<endl;
       // cout<<mp[si]<<endl;
        cout<<sn<<" "<<si<<" "<<"#"<<mp[si]<<endl;
    }


    return 0;
}


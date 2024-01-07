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
        string s;
        cin>>s;
        ll sizes=s.size(),one=0,zero=0;
        for(ll i=0;i<sizes;i++)
        {
            if(s[i]=='1') one++;
            else zero++;
        }
        ll minn=min(one,zero);
        if(minn%2==0) cout<<"NET"<<endl;
        else cout<<"DA"<<endl;
    }
    return 0;
}

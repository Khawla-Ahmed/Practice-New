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
        ll sizes;
        cin>>sizes;
        string s;
        cin>>s;
        ll cunt=0,ans=0;

        for(ll k=0; k<sizes; k++)
        {
            cunt++;
            if(s[k]!=s[k+1])
            {
                ans=max(ans,cunt);
                cunt=0;
            }
            else
            {
                continue;
            }
        }
        cout<<ans+1<<endl;
    }
    return 0;
}

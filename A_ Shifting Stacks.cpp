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
        ll s[n];
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }
        for(int i=0; i<n; i++)
        {
            if(s[i]>i)
            {
                ll e=s[i]-i;
                s[i]=s[i]-e;
                s[i+1]+=e;
            }
        }
        ll f=0;
        for(int i=0; i<n-1; i++)
        {

            if(s[i]>=s[i+1])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}


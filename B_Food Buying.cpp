/*
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

            ll r=0;
            while(true)
            {
               // cout<<" n : "<<n<<endl;
                if(n>=10)
                {
                    n=n+1-10;
                    r=r+10;
                    //cout<<" n: "<<n<<" r: "<<r<<endl;
                }
                else
                {
                    r=r+n;
                    break;
                }


        }
        cout<<r<<endl;
    }
    return 0;
}
TLE*/


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
        ll n,ans=0;
        cin>>n;
        while(n)
        {
            if(n/10!=0)
            {
                ll x=n/10;
                ans+=x*10;
                 ll y=n-x*10;
                n=x+y;
            }
            else
            {

                ans+=(n%10);
                n=n/10;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

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
        ll a,b,k1,k2,q1,q2,cunt=0;
        cin>>a>>b;
        cin>>k1>>k2;
        cin>>q1>>q2;
        for(ll i=0;i<5;i++)
        {
            cout<<"i : "<<i<<endl;
            for(ll j=0;j<5;j++)
            {
                 cout<<"j : "<<j<<endl;

                ll n=abs(k1-i);
                ll m=abs(k1-j);
                cout<<" n : "<<n<<" m : "<<m<<endl;
                if((n==a && m==b) || (n==b && m==a))
                {
                    cout<<"Hello"<<endl;
                    int s=abs(q1-i);
                    int r=abs(q2-j);
                     cout<<" s : "<<s<<" r : "<<r<<endl;
                    if((s==a && r==b) || (s==b && r==a))
                    {
                        cunt++;
                    }
                    cout<<" cunt : "<<cunt<<endl;
                }
            }
        }
        cout<<cunt<<endl;
    }




    return 0;
}

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

        ll a,b;
        cin>>a>>b;
        ll g=__gcd(a,b);
        ll lcm=a*b/g;
        if(lcm==a || lcm==b)
        {
            cout<<b*(b/a)<<"\n";
        }
        else
        {
            cout<<lcm<<"\n";
        }



    }




    return 0;
}

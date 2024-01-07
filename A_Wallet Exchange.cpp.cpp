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


        ll y= abs(a-b);
        if(y%2==0)cout<<"Bob"<<endl;
        else {
            cout<<"Alice"<<endl;
        }

    }



    return 0;
}

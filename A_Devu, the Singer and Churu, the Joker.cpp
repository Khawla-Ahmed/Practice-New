//Khawla_Ahmed
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,d;
    cin>>n>>d;
    ll arr[n];
    ll sum=0,cunt=0;
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
        if(i!=n-1)
        {
            sum+=arr[i]+10;
            cunt+=2;

        }
        else sum+=arr[i];
    }
    if(sum>d)
    {
        cout<<-1<<endl;
    }
    else
    {
        ll q=d-sum;
        ll r=q/5;
        cout<<r+cunt<<endl;
    }

    return 0;
}


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
        ll n,k;
        cin>>n>>k;
        ll p=1;
        for(int i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            p*=x;
        }
        if(2023%p!=0)cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            ll ex=2023/p;
            cout<<ex<<" ";
            k=k-1;
            for(int i=0; i<k; i++)
            {
                cout<<1<<" ";
            }
            cout<<endl;

        }

    }



    return 0;
}

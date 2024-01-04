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
        ll n,odd=0,even=0;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                even++;

            }
        }


        for(int i=0;i<n;i++)\
        {
            if(arr[i]%2!=0)
            {
                odd++;

            }
        }

        if(odd==n || even==n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}


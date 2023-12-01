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
        ll n,k,c=0;
        cin>>n>>k;
        ll arr[n+10];
        for(ll i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(ll i=0; i<n-1; i++)
        {
            if(arr[i]<=arr[i+1])
            {
                c++;

            }
            if(c==n-1)
            {
                if((arr[n-2]<=arr[n-1]))
                {
                    c++;
                }


            }

        }

        if(c==n || k>=2 || n==1)
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

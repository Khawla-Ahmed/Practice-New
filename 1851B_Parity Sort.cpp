#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        ll arr_test[n];
        for(ll i=0; i<n; i++)
        {
            cin>>arr[i];
            arr_test[i]=arr[i];
        }

        sort(arr_test,arr_test+n);
        int f=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=arr_test[i]%2)
            {
                f=1;
                break;
            }
        }
        if(f==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;


    }
    return 0;
}


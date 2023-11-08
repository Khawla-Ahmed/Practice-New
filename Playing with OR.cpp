#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        int odd=0;
        for(int i=0; i<k; i++)
        {
            if(a[i]%2!=0)odd++;
        }
        int ans=0;
        if(odd>0) ans++;
        for(int i=1; i<n-k+1; i++)
        {
            if(a[i-1]%2!=0) odd--;
            if(a[i+k-1]%2!=0) odd++;

            if(odd>0) ans++;
        }
        cout<<ans<<endl;


    }
    return 0;
}

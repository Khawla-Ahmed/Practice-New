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
        ll n,e=0,o=0;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
            {
                e++;
            }
            else o++;
        }

        if(o%2==0)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }




    return 0;
}


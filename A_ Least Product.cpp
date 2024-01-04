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
        ll n;
        cin>>n;
        ll arr[n+10];
        ll p=0,e=0,z=0;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<0)e++;
            else if(arr[i]>0)p++;
            else if(arr[i]==0)z++;
        }

        if(z>0)cout<<"0"<<endl;
        else if((e%2!=0) )cout<<0<<endl;
        else if((e%2==0))
        {
            cout<<1<<endl;
            cout<<1<<" "<<0<<endl;
        }
        else if(p==n)
        {
            cout<<1<<endl;
            cout<<1<<" "<<0<<endl;

        }


    }



    return 0;
}


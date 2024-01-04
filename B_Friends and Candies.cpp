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
        ll n,sum=0,total=0;
        cin>>n;
        ll arr[n+10];
        for(int i=0;i<n;i++)
        {
          cin>>arr[i];
          sum+=arr[i];
        }
        if(sum%n!=0)
        {
            cout<<-1<<endl;
        }
        else
        {
            ll r=sum/n;
            for(int i=0;i<n;i++)
            {
                if(arr[i]>r) total++;
            }
            cout<<total<<endl;
        }


    }



    return 0;
}

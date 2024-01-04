//Khawla_Ahmed
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll arr[n+10];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
      //  cout<<i<<" "<<arr[i]<<endl;
        ll minn=INT_MAX;
        ll maxx=INT_MIN;
        if(i==0)
        {
            //cout<<" 0 HELLO"<<endl;
           minn=abs(arr[i]-arr[i+1]);
           maxx=abs(arr[i]-arr[n-1]);
        }
        else if(i==n-1)
        {
           //              cout<<" 1 HELLO"<<endl;
            minn=abs(arr[i]-arr[n-2]);
            maxx=abs(arr[i]-arr[0]);

        }
        else
        {
            // cout<<" 2 HELLO"<<endl;
           minn=min(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i+1]));
           // cout<<abs(arr[i]-arr[i-1])<<"  "<<abs(arr[i]-arr[i+1])<<endl;
            maxx=max(abs(arr[i]-arr[0]),abs(arr[i]-arr[n-1]));
           // cout<<abs(arr[i]-arr[0])<<" "<<abs(arr[i]-arr[n-1])<<endl;
        }
        cout<<minn<<" "<<maxx<<endl;

    }





    return 0;
}


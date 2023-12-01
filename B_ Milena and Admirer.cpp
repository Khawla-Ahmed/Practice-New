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
       for(ll i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       ll cunt=0;
       for(ll i=1;i<n;i++)
       {
           if( arr[n-i] < arr[(n-i)-1] )
           {
               ll r = (arr[(n-i)-1]-1)/arr[n-i];
               cunt+=r;
               arr[(n-i)-1]=(arr[(n-i)-1])/(r+1);
           }
       }
       cout<<cunt<<endl;

   }



    return 0;
}

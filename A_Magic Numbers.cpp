//Khawla_Ahmed
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

 string s;
 cin>>s;
 ll x=s.size(),f=1;
 for(ll i=0;i<x;i++)
 {
     //cout<<i<<endl;
     //cout<<" s[i] : "<<s[i]<<endl;
     if(s[i]=='1')
     {
         if( (s[i+1]=='4')&&(s[i+2]=='4') )
         {
             i=i+2;
             f=0;
         }
         else if(s[i+1]=='4')
         {
             i=i+1;
             f=0;


         }
         else
         {
             f=0;

             continue;
         }
     }

     else{
        f=1;
        break;
     }
 }
if(f==1)cout<<"NO"<<endl;
else cout<<"YES"<<endl;
   // cout<<f<<endl;

    return 0;
}

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
       int n,H,M;
       cin>>n>>H>>M;
       int x=H*60+M;

       map<int,int>mp;
       while(n--)
       {
           int h,m;
           cin>>h>>m;
           int y=h*60+m;
           mp[y]++;

       }

           int t=0;
           while(!mp[((x+t)%1440)])
           {
               t++;
           }
          cout<<t/60<<" "<<t-((t/60)*60)<<endl;

   }
    return 0;
}

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
          ll x,y;
          cin>>x>>y;
          if(x==y) cout<<0<<" "<<0<<endl;
          else
          {
              ll g=abs(x-y);
              ll ms=x%g;
              ll ps=g -(x%g);
              ll moves=min(ms,ps);
              cout<<g<<" "<<moves<<endl;
          }
      }



    return 0;
}

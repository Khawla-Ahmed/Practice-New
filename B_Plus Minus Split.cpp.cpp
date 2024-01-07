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
        ll n,result=0;
        cin>>n;
      string s;
      cin>>s;
      for(ll i=0;i<n;i++)
      {
          if(s[i]=='-')
          {
              result=result+(-1);
          }
          else result=result+1;
      }
      cout<<abs(result)<<endl;
    }
    return 0;
}

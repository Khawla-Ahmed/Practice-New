//Khawla_Ahmed
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

   ll n,k;
   cin>>n>>k;
   vector<ll>v;
   while(n--)
   {
       ll f,t;
       cin>>f>>t;
       if(t<=k)
       {
          v.push_back(f);
       }
       else{
        v.push_back(f-(t-k));
       }
   }
   sort(v.begin(), v.end(),greater<int>());

       cout<<v[0]<<endl;



    return 0;
}


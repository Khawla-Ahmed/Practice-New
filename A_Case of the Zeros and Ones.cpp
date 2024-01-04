//Khawla_Ahmed
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,z=0,o=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
      if(s[i]=='0') z++;
      else o++;

    }

    cout<<abs(z-o)<<endl;



    return 0;
}

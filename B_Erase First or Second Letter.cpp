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
        string s;
        cin>>s;
        map<char,int>mp;
        int  sum=0;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            if(mp[s[i]]==1)
            {
                int r= n-i;
                sum+=r;
            }
        }
        cout<<sum<<endl;

    }




    return 0;
}


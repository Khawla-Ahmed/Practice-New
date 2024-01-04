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
        ll need=(n/2)+1;
        ll dont=n-need;
        int i;
        for( i=0; i<n; i++)
        {
            if(dont==0)break;
            if(s[i]!='R')
            {
                dont--;
                cout<<'P';
            }
            else
            {
                cout<<'P';
            }
        }
        for(ll k=i; k<n ; k++)
        {
            if(s[k]=='R')
            {
                cout<<'P';
            }
            else if(s[k]=='P')
            {
                cout<<'S';
            }
            else
            {
                cout<<'R';
            }
        }
        cout<<endl;
    }
    return 0;
}


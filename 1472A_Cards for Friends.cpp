#include<bits/stdc++.h>
# define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll w,h,n,mul=1;
        cin>>w>>h>>n;

        while(w%2==0)
        {
            w=w/2;
            mul=mul*2;

        }
        while(h%2==0)
        {
            h=h/2;
            mul=mul*2;

        }
        if(mul>=n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;



    }

    return 0;
}

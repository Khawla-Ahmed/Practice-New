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
        ll n,x=9;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                cout<<9;

            }
            else if(i==1)
            {
                cout<<8;

            }
            else if(i==2)
            {
                cout<<9;

            }
            else
            {
                cout<<9-x;
                x--;
                if(x<0)x=9;

            }



        }
        cout<<endl;
    }




    return 0;
}


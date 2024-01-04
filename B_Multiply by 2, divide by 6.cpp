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
        if(n==1)cout<<0<<endl;
        else
        {
            ll c=0,m=0,f=0;
            while(true)
            {

            if(n%6==0)
            {
                n=n/6;
                c++;
                m=0;
                if(n==1)
                {
                    break;
                }
            }
            else
            {
                if(m==1)
                {
                    f=1;
                    break;
                }

                n*=2;
                c++;
                m=1;

            }
          }
          if(f==0)
          {
            cout<<c<<endl;
          }
          else
          {
              cout<<-1<<endl;
          }

        }
    }


    return 0;
}


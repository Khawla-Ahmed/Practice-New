#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   /*Time limit exceeded on test 2

    ll t;
     cin>>t;
     while(t--)
     {
         ll x,y,n,z;
         cin>>x>>y>>n;
         z=y%x;
         while(true)
         {
             if(n==0)
             {

                 cout<<"0"<<endl;
                 break;
             }

             else if(n%x==z)
             {
                 cout<<n<<endl;
                 break;
             }
             n=n-1;

         }


     }*/


     ll t;
     cin>>t;
     while(t--)
     {
         ll x,y,n,z;
         cin>>x>>y>>n;
         z=n%x;
         if(z>=y)
         {
            int k=z-y;
            cout<<n-k<<endl;
         }
         else
         {
           int k=(n-x)+(y-z);
           cout<<k<<endl;
         }
     }



    return 0;
}

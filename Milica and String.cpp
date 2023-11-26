#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;



        char arr[n+10];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }

        int cunt_b=0;

        for(int i=1; i<=n; i++)
        {
            if(arr[i]=='B')
            {
                cunt_b++;
            }

        }
        //cout<<1<<endl;

        if(cunt_b>k)
        {
            cout<<1<<endl;

            int r=abs(k-cunt_b);

            for(int i=1; i<=r; i++)
            {
                if(arr[i]=='A')
                {
                    r++;
                }


            }

            cout<<r<<" "<<"A"<<endl;

        }
        else if(cunt_b<k)
        {
            cout<<1<<endl;

            int r=abs(k-cunt_b);

            for(int i=1; i<=r; i++)
            {
                if(arr[i]=='B')
                {
                    r++;
                }

            }
            cout<<r<<" "<<"B"<<endl;

        }
        else
        {
            cout<<0<<endl;
        }




    }
















    return 0;
}

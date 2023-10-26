#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,sum=0;
        cin>>n;
        long long arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        int flag=0;
        if(sum%n==0)
        {
            for(int j=0; j<n; j++)
            {
                int r=abs(arr[j]-sum/n);
                if(r%2!=0)
                {
                    flag=1;
                }

            }
            if(flag==0)
            {
                cout<<"Yes\n";
            }
            else
            {
                cout<<"No\n";
            }


        }
        else
        {
            cout<<"No\n";
        }






    }
        return 0;
    }

//Contest:START104D
//18-10-2023
#include <iostream>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)

    {
        long long n,k,sum=0;
        cin>>n>>k;
        long long arr[n];
        for(long long i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        long long sum2=sum;
        long long arr2[n];
        for(int i=0; i<n; i++)
        {
            arr2[i]=0;

        }

        for(int i=0; ; i++)
        {
            if(i>=n)
            {
                i=0;
            }
            if(sum!=0)
            {
                arr2[i]+=1;
                sum--;
            }
            else
            {
                break;
            }

        }

        long long flag=0;
        for(int i=0; i<n-1; i++)
        {
            long long x=abs(arr2[i]-arr2[i+1]);
            if(x>k)
            {
                flag=1;
            }
        }
        if(flag==1 ||  sum2/n==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}


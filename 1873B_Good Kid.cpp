//08-11-2023
//https://codeforces.com/problemset/problem/1873/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int minn=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<minn)
            {
                minn=arr[i];
            }
        }
        int flag=0,ans=1;

        for(int i=0;i<n;i++)
        {

            if(flag==0 && arr[i]==minn)
            {
                arr[i]+=1;
                flag=1;
            }
            ans*=arr[i];

        }
        cout<<ans<<endl;

    }



    return 0;
}

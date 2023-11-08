//08-11-2023
//https://codeforces.com/problemset/problem/1676/B
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
        long long arr[n];
        int minn=INT_MAX,ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<minn)
            {
                minn=arr[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            ans+=arr[i]-minn;
        }
        cout<<ans<<endl;
    }




    return 0;
}

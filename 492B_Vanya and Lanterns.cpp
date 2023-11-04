//04-11-2023
//https://codeforces.com/problemset/problem/492/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long l,n;
    cin>>n>>l;
    double arr[n];
    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    double maxx=-1;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]-arr[i]>maxx)
        {
            maxx=arr[i+1]-arr[i];
        }
    }
    double a=maxx/2;
    double x=arr[0]-0 ,y=l-arr[n-1];
    double z=max(x,y);
    std::cout<<std::fixed<<std::setprecision(10)<<max(a,z)<<endl;
    return 0;
}

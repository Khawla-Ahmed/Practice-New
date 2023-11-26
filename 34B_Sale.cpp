#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int sum=0;
    int mindis=INT_MAX;
    for(int i=0;i<m;i++)
    {
        sum+=arr[i];
        mindis=min(mindis,sum);

    }

    for(int i=1;i<n-k+1;i++)
    {
        sum-=arr[i-1];
        sum+=arr[i+k-1];
         mindis=min(mindis,sum);

    }







    return 0;
}

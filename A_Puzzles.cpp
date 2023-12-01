//Khawla_Ahmed
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m+10];
   // arr[0]=0;
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);
    int dif,mminn=INT_MAX;

    for(int i=0;(i+(n-1))<=m-1;i++)
    {

        dif=arr[i+(n-1)]-arr[i];

        mminn =min(mminn,dif);
    }
    cout<<mminn<<endl;
    return 0;
}

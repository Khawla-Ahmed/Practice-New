//08-11-2023
//https://codeforces.com/problemset/problem/1690/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n],b[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        long long diff=0;
        for(int i=0;i<n;i++)
        {
            diff=max(diff,(a[i]-b[i]));
        }
        long long e=0;
        for(int i=0;i<n;i++)
        {
            a[i]=max(e,(a[i]-diff));
        }
        int f=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                f=1;
                break;
            }
        }
        if(f==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;


    }
    return 0;
}

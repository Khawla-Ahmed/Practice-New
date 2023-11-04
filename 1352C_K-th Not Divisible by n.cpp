//05-11-2023
//https://codeforces.com/problemset/problem/1352/C
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        //case_01
        if(k<n)
        {
            cout<<k<<"\n";
        }
        //case_02
        else
        {
            int y=k+(k/(n-1));

            if(y%n==0)cout<<y-1<<"\n";
            else cout<<y<<"\n";
        }
    }
    return 0;
}

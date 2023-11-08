//08-11-2023
//https://codeforces.com/problemset/problem/1399/B
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
        long long c[n],o[n];
        long long minnc=INT_MAX,minno=INT_MAX;
        for(int i=0; i<n; i++)
        {
            cin>>c[i];
            if(c[i]<minnc)
            {
                minnc=c[i];
            }
        }
        for(int i=0; i<n; i++)
        {
            cin>>o[i];
            if(o[i]<minno)
            {
                minno=o[i];
            }
        }

        long long maxx=0;
        for(int i=0;i<n;i++)
        {
            int x= c[i]-minnc;
            int y= o[i]-minno;
             maxx+=max(x,y);

        }
        cout<<maxx<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int x,y;
        x=n/3;
        y=n%3;
        int ans1=x,ans2=x;
        if(y==1)ans1++;
        else if(y==2) ans2++;
        cout<<ans1<<" "<<ans2<<endl;
    }


    return 0;
}

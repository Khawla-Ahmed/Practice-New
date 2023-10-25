//23-10-2023
//https://codeforces.com/contest/1883/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int m=1,ans=4,p;

        for(int i=0;i<4;i++)
        {

            if(s[i]=='0')
            {

                p=10;
            }
            else
            {
                  p=s[i]-'0';
            }

            ans=abs(p-m)+ans;

            m=p;

        }
        cout<<ans<<endl;
    }
    return 0;
}

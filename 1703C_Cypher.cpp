//30-10-2023
//https://codeforces.com/problemset/problem/1703/C
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
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        vector<int >vvv;

        for(int i=0;i<n;i++)
        {
            int b,ans=0,r=0;
            cin>>b;
            string ud;
            cin>>ud;
            for(int j=0;j<b;j++)
            {
               // cout<<ud[j]<<" ";
                if(ud[j]=='U')
                {
                    ans-=1;
                }
                else
                {
                    ans+=1;
                }
              //  cout<<ans<<endl;
            }
            r=v[i]+ans;
           // cout<<r<<endl;
            if(r >10)
            {
                r=r-10;
            }
            else if(r<0)
            {
                r=10+r;
            }
            else if(r==10)
            {
                r=0;
            }
             vvv.push_back(r);

        }
        for(int i=0;i<n;i++)
        {
            cout<<vvv[i]<<" ";
        }
        cout<<endl;

    }





    return 0;
}

//Khawla_Ahmed
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v,neww;
        int flag=0;
        for(int i=0;i<(2*n);i++)
        {
           int x;
           cin>>x;
           v.push_back(x);
        }

        for(int i=0;i<(2*n);i++)
        {
            flag=0;
            for(int j=0;j<i;j++)
            {
                if(v[i]==v[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0) neww.push_back(v[i]);
        }
        for(int i=0;i<n;i++)
        {
            cout<<neww[i]<<" ";
        }
        cout<<endl;


    }



    return 0;
}

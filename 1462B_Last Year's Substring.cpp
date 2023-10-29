//29-10-2023
//https://codeforces.com/problemset/problem/1462/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<=4;i++)
        {
            string s1=s.substr(0,i);
            string s2=s.substr(n-4+i);
            string s3=s1+s2;
            if(s3=="2020")
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }




    return 0;
}

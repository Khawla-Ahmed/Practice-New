//29-10-2023
//https://codeforces.com/problemset/problem/1650/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int x1,flag=0;
        x1=s1.size();
        for(int i=0;i<x1;i++)
        {
            if(s1[i]==s2[0] && (i+1)%2!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

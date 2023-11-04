//30-10-2023
//https://codeforces.com/problemset/problem/1496/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,f=0;
        cin>>n>>k;
        string s,s1,s2;
        cin>>s;
        if(n<=k*2)
        {
            cout<<"NO"<<endl;
        }
        else
        {


        for(int i=0;i<k;i++)
        {
            if(s[i]==s[n-1-i])continue;
            else
            {
                cout<<"NO"<<endl;
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout<<"YES"<<endl;
        }
    }


}





    return 0;
}

//28-10-2023
//https://codeforces.com/problemset/problem/1606/A
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
        if(s[0]!=s.back())
        {
            s[0]=s.back();
        }

        cout<<s<<endl;
    }





    return 0;
}

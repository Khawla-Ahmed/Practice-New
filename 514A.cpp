//06-11-2023
//https://codeforces.com/problemset/problem/514/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long sizee=s.size();
    vector<int>v;

    for(int i=0; i<sizee; i++)
    {
        if(i==0 && s[i]=='9')
        {
            v.push_back(9);
        }
        else
        {
            int x=s[i]-'0';
            if(x>4)v.push_back(9-x);
            else v.push_back(x);
        }

    }
    for(int i=0; i<sizee; i++)
    {
        cout<<v[i];
    }
    cout<<endl;
    return 0;
}



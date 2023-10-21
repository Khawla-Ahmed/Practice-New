//21-10-20223
//https://codeforces.com/problemset/problem/731/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char,int>my_map;
    int j=1;
    for(char i='a';i<='z';i++)
    {
        my_map[i]=j;
        j++;
    }
    int x=my_map['a'];
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        int y= my_map[s[i]];
        int a= abs(x-y);
        int b= 26-a;
        int minn=min(a,b);
        ans=ans+minn;
        x=y;
    }
    cout<<ans<<endl;
    return 0;
}

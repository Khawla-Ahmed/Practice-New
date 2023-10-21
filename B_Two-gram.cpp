//21-10-20223
//https://codeforces.com/problemset/problem/977/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string sub;
    map<string,int>my_map;

    for(int i=0; i<n-1; i++)
    {
        sub=s.substr(i,2);
        my_map[sub]++;
    }
    int maxx=INT_MIN;
    string value;
    for(auto pr:my_map)
    {
        if(pr.second>maxx)
        {
            maxx=pr.second;
            value=pr.first;
        }
    }
    cout<<value<<endl;
    return 0;
}

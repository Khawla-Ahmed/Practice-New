//Khawla_Ahmed
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int i;
    cin>>i;
    while(i--)
    {
        string s;
        cin>>s;
        char c=s[0];
        //cout<<c<<endl;
        int x=s[1]-'0';
        //cout<<x+1<<endl;

        for(char j='a';j<c;j++)
        {
            cout<<j<<x<<endl;
        }
        for(char j=c+1;j<='h';j++)
        {
            cout<<j<<x<<endl;
        }
        for(int j=1;j<x;j++)
        {
             cout<<c<<j<<endl;
        }
        for(int j=x+1;j<=8;j++)
        {
            cout<<c<<j<<endl;
        }
    }




    return 0;
}

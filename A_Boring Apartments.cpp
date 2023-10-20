//20-10-2023
//https://codeforces.com/problemset/problem/1433/A
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
        int x=s.size();
        int r=stoi(s);
        int m=r%10;
        int sum=0;
        for(int i=1; i<=x; i++)
        {
            sum=sum+i;

        }
        cout<<10*(m-1)+sum<<endl;
    }
    return 0;
}

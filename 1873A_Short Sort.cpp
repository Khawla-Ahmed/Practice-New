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
        int c=0;
        string s1="abc";
        for(int i=0;i<3;i++)
        {
            if(s[i]==s1[i])
            {
                c++;
            }
        }
        if(c>=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}

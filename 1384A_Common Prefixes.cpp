#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        string s (200,'a');
        cout<<s<<endl;
        for(int i=0;i<n;i++)
        {
            //cout<<"i : "<<i<<endl;
            int x=arr[i];
            if(s[x]=='a') s[x]='b';
            else s[x]='a';
            cout<<s<<endl;
        }

    }





    return 0;
}

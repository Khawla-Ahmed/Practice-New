//31-10-2023
//https://codeforces.com/problemset/problem/1201/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string s[n];

    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int arr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    int ans=0,maxx=0;
    for(int i=0;i<m;i++)
    {
       // int arr[5]={0,0,0,0,0};
         int a=0,b=0,c=0,d=0,e=0;
         maxx=0;

        for(int j=0;j<n;j++)
        {
            //char arr[3][10] = {"Geek", "Geeks", "Geekfor"};
           // cout<<s[j][i]<<endl;
            //int a=0,b=0,c=0,d=0,e=0;
            if(s[j][i]=='A')
            {
                a++;
            }
            else if(s[j][i]=='B')
            {
                b++;
            }
            else if(s[j][i]=='C')
            {
                c++;
            }
             else if(s[j][i]=='D')
            {
                d++;
            }
            else{
                e++;
            }
            //cout<<a<<b<<c<<d<<e<<endl;

            maxx=max(a,max(b,max(c,max(d,e))));
            //cout<<maxx<<endl;


        }
        //cout<<maxx<<endl;

            ans=(maxx*arr[i])+ans;
            //cout<<ans<<endl;


    }


 cout<<ans<<endl;



    return 0;
}

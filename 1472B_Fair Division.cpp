//08-11-2023
//https://codeforces.com/problemset/problem/1472/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,one=0,two=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]==1) one++;
            else two++;

        }
        if(one%2==0 && two%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            sort(arr, arr + n, greater<int>());

            int x=arr[0],y=0,m=n-1;
            int i=1;
            while(m--)
            {
                if(y<=x)
                {
                    y+=arr[i];
                }
                else x+=arr[i];

                i++;
            }
            if(x==y)
            {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}

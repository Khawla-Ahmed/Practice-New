#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<"0"<<endl;
        }
        else if(a>b)
        {
            int x;
            x=a-b;
            if(x%2==0) cout<<"1"<<endl;

            else cout<<"2"<<endl;

        }
        else
        {
            int x;
            x=b-a;
            if(x%2==0) cout<<"2"<<endl;

            else cout<<"1"<<endl;

        }
    }



    return 0;
}

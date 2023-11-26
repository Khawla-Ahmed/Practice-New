#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,first=0;
        cin>>n;
        if((n-1)%3==0)
        {
            cout<<"First"<<endl;
        }
        else if((n+1)%3==0)
        {
             cout<<"First"<<endl;
        }
        else
        {
        cout<<"Second"<<endl;
        }

    }




    return 0;
}

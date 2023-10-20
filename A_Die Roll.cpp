//20-10-2023
//https://codeforces.com/problemset/problem/9/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,m,n,flag=0;
    cin>>x>>y;
    z=(6-max(x,y))+1;
    int i=2;
    if(z==6 )
    {
        cout<<"1/1"<<endl;
    }
    else
    {
        while(i<10)
        {
            if(z%i==0 && 6%i==0)
            {
                m=z/i;
                n=6/i;
                cout<<m<<"/"<<n<<endl;
                flag=1;
                break;
            }
            else
            {

                i++;

            }
        }
        if(flag==0)
        {
            cout<<z<<"/"<<"6"<<endl;
        }
    }
    return 0;
}

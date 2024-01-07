//Khawla_Ahmed
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        char table[8][8];
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                cin>>table[i][j];
            }
        }
        ll cunt=0,f=0;
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                if(table[i][j]=='R' )
                {
                    cunt++;
                    f=0;
                }
                else
                {
                    f=1;
                    cunt=0;
                    break;
                }
            }
            if(cunt==8)
            {
                cout<<"R"<<endl;
                f=0;
                break;
            }
            else f=1;
        }
        if(f==1) cout<<"B"<<endl;
    }
    return 0;
}

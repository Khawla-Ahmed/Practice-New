//05-11-2023
//https://codeforces.com/problemset/problem/489/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int bs,gs;
    cin>>bs;
    int barr[bs];
    for(int i=0; i<bs; i++)
    {
        cin>>barr[i];
    }
    sort(barr,barr+bs);

    cin>>gs;
    int garr[gs];
    for(int i=0; i<gs; i++)
    {
        cin>>garr[i];
    }
    sort(garr,garr+gs);
    int c=0;
    if(bs>=gs)
    {
        for(int i=0; i<gs; i++)
        {
            for(int j=0; j<bs; j++)
            {
                if(abs(garr[i]-barr[j])<=1)
                {
                    c++;
                    barr[j]=1000;

                    break;
                }
            }
        }
    }
    else
    {
        for(int i=0; i<bs; i++)
        {
            for(int j=0; j<gs; j++)
            {
                if(abs(barr[i]-garr[j])<=1)
                {
                    c++;
                    garr[j]=1000;
                    break;
                }
            }
        }
    }
    cout<<c<<endl;
    return 0;
}

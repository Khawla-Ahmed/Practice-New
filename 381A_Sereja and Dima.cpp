#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    v.resize(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int j=1,i=0,ss=0,d=0;
    int r=0,l=n-1;
    while(n--)
    {
        if(v[r]>v[l])
        {
            if(j%2!=0)
            {
                ss+=v[r];
            }
            else
            {
                d+=v[r];
            }
            r++;
            j++;
        }
        else{ //v[l]>v[r]
             if(j%2!=0)
            {
                ss+=v[l];
            }
            else
            {
                d+=v[l];
            }
            l--;
            j++;

        }
    }
    cout<<ss<<" "<<d<<endl;
    return 0;
}

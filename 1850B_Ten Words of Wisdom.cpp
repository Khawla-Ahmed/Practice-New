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
       map<int,int>mp;
        int i=1;
        while(n--)
        {
            int a,b;
            cin>>a>>b;
            if(a<=10)
            {
               mp[b]=i;
            }
            i++;
        }
        int maxx=INT_MIN;
        for(auto &el :mp)
        {
            maxx=max(el.first,maxx);
        }
        cout<<mp[maxx]<<endl;

    }


    return 0;
}

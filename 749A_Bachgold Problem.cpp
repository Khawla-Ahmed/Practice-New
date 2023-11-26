
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    int sum=0;
    if(n%2==0)
    {
        while(true)
        {
           // cout<<" sum : "<<sum<<endl;
            sum=sum+2;
            v.push_back(2);
            if(sum==n)
            {

                break;
            }

        }
    }
    else
    {
        while(true)
        {
            sum=sum+2;
            v.push_back(2);
            if(sum==n-1)
            {
                v.pop_back();
                v.push_back(3);
                break;
            }
        }
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}

//Khawla_Ahmed
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
       vector<ll>a,even,odd;
       for(int i=0;i<n;i++)
       {
          ll x;
          cin>>x;
          if(x%2==0) even.push_back(x);
          else odd.push_back(x);
       }

       for(auto i:even) a.push_back(i);
       for(auto i:odd) a.push_back(i);


       ll result=0;
       for(int k=0;k<a.size();k++)
       {
           for(int l=k+1;l<a.size();l++)
           {
               if(__gcd(a[k],(2*(a[l])))>1) result++;
           }
       }
       cout<<result<<endl;




    }



    return 0;
}


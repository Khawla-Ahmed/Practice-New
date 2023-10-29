//28-10-2023
//https://codeforces.com/problemset/problem/746/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<char>c;
   while(n!=0)
   {
       int x = s.size();
       if(x%2!=0)//odd
       {
           c.push_back(s[0]);
       }
       else //even
       {
           c.insert(c.begin(),s[0]);
       }
       n--;
       s.erase(0,1);


   }
   for(int i=0;i<c.size();i++)
   {
       cout<<c[i];
   }

    return 0;
}

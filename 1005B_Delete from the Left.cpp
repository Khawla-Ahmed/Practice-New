//28-10-2023
//https://codeforces.com/problemset/problem/1005/B
#include<bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int x1=s1.size();

    int x2=s2.size(),cunt=0;
    int minn=min(x1,x2);

    while(minn!=0)
    {

        if(s1[x1-1] == s2[x2-1])
        {
                cunt+=2;
                x1--;
                x2--;

        }
        else
        {
            break;
        }
        minn--;

    }
   cout<<(s1.size()+s2.size())-cunt<<endl;



    return 0;
}

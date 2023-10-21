//21-10-20223
//https://codeforces.com/problemset/problem/474/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char>neww;
    char c;
    cin>>c;
    char arr[]= {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        for(int j=0; j<31; j++)
        {
            if(s[i]==arr[j])
            {
                if(c=='R')
                {
                   neww.push_back(arr[j-1]);

                }
                else
                {
                    neww.push_back(arr[j+1]);

                }
                break;

            }
        }

    }
    for(int i=0;i<neww.size();i++)
    {
        cout<<neww[i];
    }
    cout<<"\n";
    return 0;
}

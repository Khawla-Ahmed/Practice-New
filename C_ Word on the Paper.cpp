//22-10-20223
//https://codeforces.com/problemset/problem/1850/C
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char c[8][8];
        vector<char>v;
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>c[i][j];
                if(c[i][j]!='.')
                {
                    v.push_back(c[i][j]);
                }
            }
        }


        for(int i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
        cout<<endl;

    }




 return 0;
}

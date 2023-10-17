//18-10-2023
//1626A - Equidistant Letters
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector<char>c;
        for(int i=0; i<=s.size(); i++)
        {

            if(s[i]=='0')
            {

                continue;
            }
            else
            {
                for(int j=i+1; j<=s.size(); j++)
                {

                     if(s[i]==s[j])
                    {

                        c.push_back(s[i]);
                        c.push_back(s[j]);
                        s[j]='0';
                        break;

                    }
                    else if(j==s.size())
                    {
                        c.push_back(s[i]);
                    }

                }
            }

        }

        for(int i=0; i<c.size(); i++)
        {
            cout<<c[i];
        }
        cout<<endl;

    }



    return 0;
}

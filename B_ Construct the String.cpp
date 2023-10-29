#include<bits/stdc++.h>
using namespace std;
int main()
{
    //this one more efficient
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        for(int i=0;i<n;i++)
        {
            int r=i%b;
            char c= 'a'+r;
            cout<<c;
        }
        cout<<"\n";
    }

    //less efficient
   /* int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        vector<char>v;
        int i=0,flag=1;
        while(true)
        {
            char c='a';
            for(int j=0; j<b; j++)
            {
                if(i!=n)
                {
                    v.push_back(c);
                    i++;
                    c++;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
            {
                break;
            }

        }
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i];
        }
        cout<<"\n";
    }
*/
    return 0;
}

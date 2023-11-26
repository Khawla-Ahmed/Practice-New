#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,f=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=1; i<s.size()-1; i++)
        {
            if      (  (s[i-1]=='.')   &&  (s[i]=='.')  &&   (s[i+1]=='.')   )
            {
              f=1;
              break;
            }

        }
        int cunt=0;
        if(f==1) cout<<2<<endl;
        else{
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='.') cunt++;
            }
            cout<<cunt<<endl;
        }


    }




    return 0;
}

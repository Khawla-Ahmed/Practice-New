#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int total=0;

        total=max(0,k-n);
        //cout<<"1 total : "<<total<<endl;
        n+=total;
       // cout<<"1 n : "<<n<<endl;

        if(k%2!=0) // k odd
        {
          //  cout<<"k odd : "<<endl;
            if(n%2==0) //n even
            {
               // cout<<"n even "<<endl;
                total++;
            }
        }
        if(k%2==0) // k even
        {
             //cout<<"k even : "<<endl;
            if(n%2!=0) //n odd
            {
                 //cout<<"n odd "<<endl;
                total++;
            }
        }
        cout<<total<<endl;
    }



    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x1=(3*a)/10;

    int y1=a-(a/250)*c;
    int result1=max(x1,y1);

    int x2=(3*b)/103;
    int y2=b-(b/250)*d;
    int result2=max(x2,y2);

     if(result1>result2)cout<<"Misha"<<endl;
     else if(result1<result2)cout<<"Vasya"<<endl;
     else cout<<"Tie"<<endl;
    return 0;
}

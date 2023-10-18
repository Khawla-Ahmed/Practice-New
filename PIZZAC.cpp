//Contest:START104D
//18-10-2023
#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
  //  cout<<n%2<<endl;
    if(n%2 == 0  || n==1)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }
}
	return 0;
}


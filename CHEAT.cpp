//25-10-2023
//https://www.codechef.com/START105D/problems/CHEAT

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int cunt=0;
	    char c ='a';
	    while(n--)
	    {
	        if(c=='b')
	        {
	            cunt++;
	        }


	        if(c=='g')
	        {
	            c='a';
	        }
	        else
	        {
	            c++;
	        }



	    }
	    cout<<cunt<<endl;
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    int arr[100];
    for(int i=0;i<12;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+12,greater<int>());

    int sum=0,c=0;
    for(int i=0;i<12;i++)
    {
        if(k==0)
        {


            break;
        }
        else if((sum+arr[i])<k)
        {
            sum=sum+arr[i];

            c++;

        }
        else{
            c++;
             sum=sum+arr[i];
            break;
        }

    }
    if(sum<k)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<c<<endl;
    }




    return 0;
}

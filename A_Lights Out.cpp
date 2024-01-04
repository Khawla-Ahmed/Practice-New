//Khawla_Ahmed
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int test [3][3];
   bool result[3][3];

   for(int i=0;i<3 ;i++)
   {
       for(int j=0;j<3;j++)
       {
           result[i][j]=true; //1
       }
   }
   for(int i=0;i<3 ;i++)
   {
       for(int j=0;j<3;j++)
       {
          cin>>test[i][j];
       }
   }
   if(test[0][0]%2!=0)
   {
       result[0][0]=!result[0][0];
       result[0][1]=!result[0][1];
       result[1][0]=!result[1][0];
   }
   if(test[0][1]%2!=0)
   {
       result[0][1]=!result[0][1];
       result[0][0]=!result[0][0];
       result[0][2]=!result[0][2];
       result[1][1]=!result[1][1];

   }
   if(test[0][2]%2!=0)
   {
     result[0][2]=!result[0][2];
       result[0][1]=!result[0][1];
         result[1][2]=!result[1][2];

   }
    if(test[1][0]%2!=0)
   {
     result[1][0]=!result[1][0];
       result[1][1]=!result[1][1];
         result[2][0]=!result[2][0];
         result[0][0]=!result[0][0];

   }
   if(test[1][1]%2!=0)
   {
       result[0][1]=!result[0][1];
       result[1][0]=!result[1][0];
        result[1][2]=!result[1][2];
        result[1][1]=!result[1][1];
        result[2][1]=!result[2][1];
   }
    if(test[1][2]%2!=0)
   {
     result[1][2]=!result[1][2];
       result[1][1]=!result[1][1];
         result[2][2]=!result[2][2];
         result[0][2]=!result[0][2];

   }
   if(test[2][0]%2!=0)
   {
         result[2][0]=!result[2][0];
         result[1][0]=!result[1][0];
         result[2][1]=!result[2][1];
   }

   if(test[2][1]%2!=0)
   {
       result[2][1]=!result[2][1];
       result[2][0]=!result[2][0];
       result[2][2]=!result[2][2];
       result[1][1]=!result[1][1];

   }
   if(test[2][2]%2!=0)
   {
         result[2][2]=!result[2][2];
         result[1][2]=!result[1][2];
         result[2][1]=!result[2][1];
   }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<result[i][j];
        }
        cout<<endl;
    }

    return 0;
}


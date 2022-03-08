#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
     long long a,b,c,i,sum1,sum2,count=0,count1=0;
     cin>>a;
     long long arr[a];
     for (i=0; i<a; i++)
     {
         cin>>arr[i];
     }


     for (i=0; i<a; i++)
     {
         if (arr[i]==0)
         {
           count++;
         }
         else 
         {
             count1++;
         }
     }
      sum1 = count1;
     if (count==a)
     {
         cout<<"Bob"<<endl;
     }
     else if ((sum1%2)==0)
     {
         cout<<"Bob"<<endl;
     }
     else 
     {
         cout<<"Alice"<<endl;
     }

  }
}
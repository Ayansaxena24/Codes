#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
     int a,b,c,count1=0,count2=0,sum1,sum2;
     cin>>a;
     while (a--)
     {
         cin>>b;
         c = b%2;
         if (c!=0)
         {
             count1++;
         }
         else if (c==0)
         {
            count2++;
         }

     }
       if (count1>1)
         {
             cout<<count1/2<<endl;
         }
         else 
         {
             cout<<"0"<<endl;
         }
}
}
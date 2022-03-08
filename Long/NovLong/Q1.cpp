#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
     int x,y,a,b,k,sum1,sum2;
     cin>>x>>y>>a>>b>>k;

     sum1 = x+(a*k);
     sum2 = y+(b*k);

     if (sum1>sum2)
     {
         cout<<"DIESEL"<<endl;
     }
     else if (sum2>sum1)
     {
         cout<<"PETROL"<<endl;
     }
     else 
     {
         cout<<"SAME PRICE"<<endl;
     }
  }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
     long double t1,t2,r1,r2,sum1,sum2,prod1,prod2,x1,x2;
     cin>>t1>>t2>>r1>>r2;
     

     sum1 = t1*t1;
     sum2 = r1*r1*r1;
     prod1 = t2*t2;;
     prod2 = r2*r2*r2;

     x1 = (sum1/sum2);
     x2 = (prod1/prod2);

     if (x1==x2)
     {
         cout<<"Yes"<<endl;
     }
     else 
     {
         cout<<"No"<<endl;
     }
  }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
     int dsa1,toc1,dm1,dsa2,toc2,dm2,sum1,sum2;
     cin>>dsa1>>toc1>>dm1;
     cin>>dsa2>>toc2>>dm2;

     sum1 = dsa1+toc1+dm1;
     sum2 = dsa2+toc2+dm2;

     if (sum1>sum2)
     {
        cout<<"Dragon"<<endl;
     }
     else if (sum1<sum2)
     {
         cout<<"Sloth"<<endl;
     }
     else if (sum1==sum2)
     {
         if (dsa1>dsa2)
         {
             cout<<"Dragon"<<endl;
         }
         else if (dsa2>dsa1)
         {
             cout<<"Sloth"<<endl;
         }
         else if (dsa2==dsa1)
         {
             if (toc1>toc2)
             {
                 cout<<"Dragon"<<endl;
             }
             else if (toc2>toc1)
             {
                 cout<<"Sloth"<<endl;
             }
             else if (toc1==toc2)
             {
                 cout<<"Tie"<<endl;
             }
         }
     }
  }
  
}
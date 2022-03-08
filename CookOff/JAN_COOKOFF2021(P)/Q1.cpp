#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
     int x,y,z,a,b,c,i,sum1,sum2;
     cin>>x>>y>>z;

     if (y<=x)
     {
         cout<<"PIZZA"<<endl;
     }
     else if (y>x && z<=x)
     {
         cout<<"BURGER"<<endl;
     }
     else 
     {
         cout<<"NOTHING"<<endl;
     }
  }
}
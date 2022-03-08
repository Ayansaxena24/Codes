#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
     int n,a,b,c,i,sum1,sum2;
     cin>>n>>a;

     if (a<=(n/2))
     {
         cout<<a<<endl;
     }

     else 
     {
         cout<<(n-a)<<endl;
     }
  }
}
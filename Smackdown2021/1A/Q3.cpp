#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
     int n,k,c,i,sum1,sum2;
     cin>>n>>k;
     //sum1 =(n-1)*2;

     sum1 = (n*2)-(k+1);
     if (sum1%2==0)
     {
       cout<<sum1<<endl;
     }
     else 
     {
       cout<<sum1-1<<endl;
     }
      
  }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
     int armor,b,c,n,i,sum1=0,sum2;
     cin>>n;
     int arr[n];
     for (i=0; i<n ; i++)
     {
         cin>>arr[i];
     }
     cin>>armor;

     for (i=0; i<n; i++)
     {
         sum1 = sum1 + arr[i];
     }
      
     sum2 = (sum1+1)-armor;
     cout<<sum2<<endl;
  }
}
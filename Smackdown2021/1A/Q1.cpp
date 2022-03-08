#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
     int x,y,d=2,n,i,sum1,sum2;
     cin>>x>>y;
     if (x==y)
     {
         cout<<"0"<<endl;
     }
     else if (x>y)
     {
         cout<<x-y<<endl;
     }
     else
     {
         if (x%2==0 && y%2==0)
         {
            n = ((y-x)/d)+1;
            cout<<n-1<<endl;
         }
         else if (x%2!=0 && y%2!=0)
         {
            n = ((y-x)/d)+1;
            cout<<n-1<<endl;
         }
         else if (x%2==0 && y%2!=0)
         {
            sum1 = y+1;
            n = ((sum1-x)/d)+1;
            cout<<n<<endl;
         }
         else if (x%2!=0 && y%2==0)
         {
            sum1 = y+1;
            n = ((sum1-x)/d)+1;
            cout<<n<<endl;
         }
     }
  }
}
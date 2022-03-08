#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
     int x,y,c,i,sum1,sum2;
     cin>>x>>y;

     c = x%2;
     i = y%2;
     
     if (c!=0)
     {
       cout<<"NO"<<endl;
     }
    //  else if (c==0 && i==0)
    //  {
    //    cout<<"YES"<<endl;
    //  }
     else if (x==0 && i!=0)
     {
       cout<<"NO"<<endl;
     }
     else
     {
       cout<<"YES"<<endl;
     }
    
     

  }
}
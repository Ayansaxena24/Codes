#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
     int i,b,c,sum1,sum2;
     int count = 0;
     int a = 0 ;
     string halwa;
     cin>>halwa;

     for ( i=0; i<halwa.length() ;i++)
     {
         if (halwa[i]=='1' && halwa[i+1]=='0')
         {
             count++;
         } 
         if (halwa[i]=='1' && halwa[i+1]=='1')
         {
             a++;
         }

     }
     //cout<<count<<a<<endl;
     if (count>=1 || a>=1)
     {
         cout<<"Yes"<<endl;
     }
     else 
     {
         cout<<"No"<<endl;
     }

     
  }
}
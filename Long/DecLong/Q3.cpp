#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    //  int a,b,c,i,sum1,sum2;
    //  cin>>a>>b;

     int a,b;
     cin>>a>>b;
     string str ="";
     if(a==b)
     {
         for(int i=0;i<=a;i++) str += "01";
          cout<<str.size()<<endl;
          cout<<str<<endl;
     }
     else if(b>a)
     {
         for(int i=0;i<a+1;i++) str += "10";
         for(int i=0;i<b-a-1;i++) str += "110";
         str += "1";
         cout<<str.size()<<endl;
         cout<<str<<endl;
     }
     else
     {
         for(int i=0;i<b;i++) str += "01";
         for(int i=0;i<a-b;i++) str += "010";
         cout<<str.size()<<endl;
         cout<<str<<endl;
     }
  }
  }
    
// // odd even--------------
//      if (a%2!=0 && b%2==0)
//      {
//        if (a>b)
//        {
//          cout<<(2*a)+1<<endl;
//          for(i=0; i<a; i++)
//          {
//           cout<<"01";
//          }
//          cout<<"0"<<endl;
//        }
//        if (b>a)
//        {
//          cout<<(2*b)+1<<endl;
//          for(i=0; i<b; i++)
//          {
//           cout<<"10";
//          }
//          cout<<"1"<<endl;
//        }
//      }

// //even odd----------------
//      else if (a%2==0 && b%2!=0)
//      {
//        cout<<(2*b)+1<<endl;
//        if (b>a)
//        {
//          for(i=0; i<b; i++)
//          {
//           cout<<"10";
//          }
//          cout<<"1"<<endl;
//        }
//        if (a>b)
//        {
//          cout<<(2*a)+1<<endl;
//          for(i=0; i<a; i++)
//          {
//           cout<<"01";
//          }
//          cout<<"0"<<endl;
//        }

//      }

// //odd odd------------------
//       else if (a%2!=0 && b%2!=0)
//        {
//          cout<<(2*a)+2<<endl;
//          for(i=0; i<=b; i++)
//          {
//           cout<<"01";
//          }
//        }

// //even even------------------
//      else if (a%2==0 && b%2==0)
//        {
//          cout<<(2*a)+2<<endl;
//          for(i=0; i<=b; i++)
//          {
//           cout<<"10";
//          }
//        }
     
//  }
// }


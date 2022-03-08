#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll powr(ll a, ll b) {
    ll res = 1 ;
    while(b) {
        if(b&1) {
            res *= a ;
        }
        a *= a ;
        b /= 2 ;
    }
    return res ;
}
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
     long long n,d,a,b,c,i,sum1,sum2,sum3,sum4;
     cin>>n>>d;
     if (d==0)
     {
         cout<<"1"<<endl;
     }

     else if (d<=10)
     {
         sum1 = powr(2,d);
         if (sum1<n)
         {
           cout<<sum1<<endl;
         }
         else 
         {
             cout<<n<<endl;
         }
     }
     else if (d>10)
     {
         sum2 = powr(2,10);
         long long k = (d-10);
         if (k<=12)
         {
         sum3 = sum2*(powr(3,k));  
         if (sum3<n)
         {
             cout<<sum3<<endl;
         }
         else
         {
             cout<<n<<endl;
         }
         }
         else {
             cout << n << endl ;
         }

        
     }

  }
}
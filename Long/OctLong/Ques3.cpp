#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n,i,a,b,c,count,sum1,sum2,sum3,sum4;
        cin>>n; 
         a = log2(n);
         b = powl(2,a);
         c = powl(2,a-1);

        
             if (b==n)
             {
                 sum4 = b-c;
                 cout<<sum4<<endl;
             }
            
            else
            {
             sum1 = n-b+1;
             sum2 = b-c;
             count = max(sum1,sum2);
             cout<<count<<endl;
            }
         }        
    }
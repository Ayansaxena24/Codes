#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n,i,a,b,c,x,d;
        cin>>x;
        a = log2(x);
        b = powl(2,a);
        d = powl(2,a+1);
        c = d-1;

        if (x==0)
        {
          cout<<"1"<<endl;
        }
        else if (x==1)
        {
          cout<<"2"<<endl;
        }

        else if (x>1)
        {
        if (b==x)
        {
          cout<<b<<endl;
        }
        else if (c==x)
        {
          cout<<d<<endl;
        }
        else 
        {
          cout<<b<<endl;
        }
        }
    }
     

        




    }
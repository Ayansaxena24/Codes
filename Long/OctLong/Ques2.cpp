#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int sum1 = a+b+c;
        int sum2 = sum1/d;
        int sum3 = sum2+1;
        if (sum1<=d)
        {
            cout<<"1"<<endl;
        }

        else if (sum1>d)
            {
                if ((a+b)>d && (b+c)>d && (a+c)>d)
                {
                    cout<<"3"<<endl;
                }
                else 
                {
                    cout<<"2"<<endl;
                }
            }
           
        
            

        }
        
    }


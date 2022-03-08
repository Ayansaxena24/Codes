#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,i,sum1,sum2;
        cin>>a>>b>>c;
        if (a==7)
        {
            cout<<"YES"<<endl;
        }
        else if (a!=7 && b==7) 
        {
            cout<<"YES"<<endl;
        }
        else if (a!=7 && b!=7 && c==7) 
        {
            cout<<"YES"<<endl;
        }
        else if (a==7 && b==7 && c!=7) 
        {
            cout<<"YES"<<endl;
        }
        else if (a!=7 && b==7 && c==7) 
        {
            cout<<"YES"<<endl;
        }
        else if (a==7 && b!=7 && c==7) 
        {
            cout<<"YES"<<endl;
        }
        else if (a==7 && b==7 && c==7) 
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }

    }
}
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,a1,b1,a2,b2;
        cin>>a>>b>>a1>>b1>>a2>>b2;
        string string = "NO";
        if(!(a==1 || b==1 || a==8 || b==8))
        {
            string = "NO";
        }
        else
        {
            if(a==1)
            {
                if((a1==2 || a2==2) && b1!=b2)
                {
                    if(abs(b2-b)>1 && abs(b1-b)>1)
                    string = "YES";                  
                }
            }
             if(a==8)
            {
                if((a1==7 || a2==7) && b1!=b2)
                {
                    if(abs(b2-b)>1 && abs(b1-b)>1)
                    string = "YES";                   
                }
            } 
            if(b==1)
            {
                if((b1==2 || b2==2) && a1!=a2)
                {
                    if(abs(a2-a)>1 && abs(a1-a)>1)
                    string = "YES";
                }
            }
             if(b==8)
            {
                if((b1==7 || b2==7) && a1!=a2)
                {
                    if(abs(a2-a)>1 && abs(a1-a)>1)
                    string = "YES";
                }
            }
        }
      cout<<string<<endl;
    }
    return 0;
}
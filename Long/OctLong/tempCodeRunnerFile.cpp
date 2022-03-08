#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long t,n,l,i,a,b,c,d,e,f,g,m,sum1;
        
         cin>>n>>d;
         string s = to_string(n);

         if (d>0 && d<9)
         {
         for (i=0; i<s.size(); i++)
         {
           if (s[i]==d+48)
           {
             s[i]++;
             a = i;
             break;
           }
           

         }

         for (int j=a+1; j<s.size(); j++)
         {
           s[j]='0';
         }

         b = stoll(s);
         cout<<b-n<<endl; 
         }

         else if (d==0)
         {
           for (int k=0; k<s.size(); k++)
           {
             if (s[k]==(d+48))
             {
               s[k]++;
               e = k;
               break;
             } 
             
           }
            for (int l=e+1; l<s.size(); l++)
            {
              s[l] = '1';
            }
           d = stoll(s);
           cout<<(d-n)<<endl;
         }

         else if (d==9)
         {
           for (int m=0; m<s.size(); m++)
           {
             if (s[m]==(d+48))
             {
               s[m]='0';
                s[m-1]++;
               f = m;
               break;
             } 
             
           }
          
            for (int l=f+1; l<s.size(); l++)
            {
              s[l] = '0';
            }
           g = stoll(s);
           cout<<(g-n)<<endl;
         }

         
         }


  
        
      }
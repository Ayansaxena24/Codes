#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); 
            cin.tie(NULL);


    int t;
    cin>>t;
    while (t--)
    {
        long long t,n,l,i,o,a,b,c,d,e,f,g,m,x,y,z,sum1;
        
         cin>>n>>d;
         string s = to_string(n);

         unordered_set<long long> pq;
             long long h1=n;
             while(h1>0){
                 long long r=h1%10;
                 h1=h1/10;
                pq.insert(r);
             }
             if(pq.count(d)==0) cout<<0<<"\n";
             else{

             

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
         cout<<b-n<<"\n"; 
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
           cout<<(d-n)<<"\n";
         }

         else if (d==9)
         {
           x = s.find(d+48);
           if (x==0)
           {
             string s2="0";
             s2 += s;
             s2[0]='1';
             for (int p=1; p<s2.size(); p++)
             {
               s2[p]='0';
             }
             int q = stoll(s2);
           cout<<abs(q-n)<<"\n";
           }

           else 
           {
              if (s[x-1]!='8')
              {
                s[x-1]++;
                for (int l=x; l<s.size(); l++)
               {
                 s[l] = '0';
               }
              
               g = stoll(s);
               cout<<(g-n)<<"\n";            
               }

            else
            {
              string s3="0";
              s3 += s;
              y = x-1;
              while (s3[y]=='8')
              {
                s3[y]='0';
                y--;
              }
              if (y==0)
              {
                s3[y]='1';
              }
              else 
              {
              s3[y]++;
              }
              for (int w=x; w<s3.size(); w++)
              {
                s3[w]='0';
              }
               o = stoll(s3);
               cout<<(o-n)<<"\n";            
               }

            } 
          
            
         }
             }

             }
           }
        




























          /* for (int m=0; m<s.size(); m++)
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
         }*/

         
      
#include <bits/stdc++.h>
using namespace std;
int main()
{
     long long n,a,b,c,i,sum1,sum2;
     cin>>n;
     n++;
     vector<char> vec1;
     while(n>0)
     {
         a=n%26;
     if (n == 0)
     {
         vec1.push_back('Z');
         n= (n/26)-1;
     }
     else 
     {
         vec1.push_back((a-1) + 'A');
         n = (n/26);
     }
     }
     reverse (vec1.begin(),vec1.end());
     for (i=0;i<vec1.size();i++)
     {
         cout<<vec1[i];
     }
     cout<<endl;

  }

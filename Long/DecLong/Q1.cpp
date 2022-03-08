#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
     
    string a,b,c,d,e;
    int count1=0,count2=0,count3=0,sum1,sum2;

        char arr[3];
        char arr2[2];
        for (int i=0;i<3;i++)
        {
          cin>>arr[i];
        }
        for (int j=0;j<2;j++)
        {
          cin>>arr2[j];
        }
        for(int i=0;i<3;i++)
        {
          if (arr[i]==arr2[0])
          {
            sum1=i;
          }
        }
        for(int j=0;j<3;j++)
        {
          if (arr[j]==arr2[1])
          {
            sum2=j;
          }
        }
         if (sum1<sum2)
          {
            cout<<arr[sum1]<<endl;
          }
          else
          {
            cout<<arr[sum2]<<endl;
          }





  }
}
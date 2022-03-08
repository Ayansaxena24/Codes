#include <bits/stdc++.h>
using namespace std;
int main()
{
     long long n,k,a,b,c,i,sum1,sum2,count=0,count1=0;
     cin>>n>>k;
     long long arr[n+1];
     long long answer=0;
     for (i=0;i<n;i++)
     {
         cin>>arr[i];
         answer=answer^arr[i];
     }
    arr[n]=answer;
    sum1 = (k%(n+1));
    if (sum1==0)
    {
        sum1=n+1;
    }
    cout<<arr[sum1-1]<<endl;

}
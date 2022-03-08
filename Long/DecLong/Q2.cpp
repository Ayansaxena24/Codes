#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  int b;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    int i;
    int count=0;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
          if (arr[i]!=arr[j])
          {
              count++;
          }
        }
    }

     

    
  }
}
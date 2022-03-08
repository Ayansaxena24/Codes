#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
     long long n,a,b,c,d,e,f,g,h,sum1,sum2;
     cin>>n;
    //  cin>>a>>b>>c;
    //  cin>>d>>e>>f;
    //  cin>>g>>h>>i;
    a = 0;
    vector<vector <int>> vec1(3, vector<int>(3));
    for (int i=0; i<3; i++)
      {
          for(int j=0; j<3; j++)
          {
          cin>>vec1[i][j];
          }
    //       vector<int> row;
    //       for (int j=0; j<3; j++)
    //       {
    //     int element;
    //     cin>>element;
    //     vec1.push_back(element);
    //   }
    //   vec1.push_back(row);
       }

     if(vec1[0][0]==n && vec1[1][1]==n && vec1[2][2]==n){
          cout<<a<<endl;
          continue;
     }
     sum1 = vec1[2][0]+ vec1[1][0]+ vec1[2][1];
     sum2 = vec1[0][1]+ vec1[0][2]+ vec1[1][2];
     cout<<max(sum1,sum2)<<endl;

    //  sum2 = d+g+h;
    //  if (a==n && e==n && i==n)
    //  {
    //      cout<<"0"<<endl;
    //  }
    //  else if (sum1>sum2)
    //  {
    //      cout<<sum1;
    //  }
    //  else 
    //  {
    //      cout<<sum2;
    //  }
  }
}
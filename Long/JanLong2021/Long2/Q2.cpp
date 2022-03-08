// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int t;
//   cin>>t;
//   while (t--)
//   {
//      long long a,b,c,n,x,i,sum1,sum2,sum3;
//      cin>>n>>x;

//      vector<int> vec1;
//      for (int i=0; i<n; i++)
//        {
//          long long element;
//          cin>>element;
//          vec1.push_back(element);
//        }
//        sort (vec1.begin(), vec1.end());
       
//        sum3 = accumulate(vec1.begin(), vec1.end(), 0);
//        sum1 = vec1[n-1];
//        if (sum3<x)
//        {
//            cout<<"-1"<<endl;
//        } 
//        else if (sum3 == x)
//        {
//            cout<<n<<endl;
//        } 
//        else if (sum1 == x)
//        {
//            cout<<"1"<<endl;
//        }
//        else {
//        for (i=n-2; i>=0; i--)
//        {
//            sum1 += vec1[i];
//            if (sum1>=x)
//            {
//                sum2=i;
//                break;
//            }
//        }
       
//        a = n-sum2;
//        cout<<a<<endl;
       
//     }


//   }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int t;
//   cin>>t;
//   while (t--)
//   {
//      long long a,b,c,n,x,i,sum1,sum2,sum3;
//      cin>>n>>x;

//      vector<int> vec1;
//      for (int i=0; i<n; i++)
//        {
//          long long element;
//          cin>>element;
//          vec1.push_back(element);
//        }
//        sort (vec1.rend(), vec1.rbegin());

//        sum1 = 0;
//        long long count = 0;
//        sum3 = accumulate(vec1.rbegin(), vec1.rend(), 0);
//        if (sum3<x)
//        {
//            cout<<"-1"<<endl;
//        } 
//        else {

//        for (i=0; i<n; i++)
//        {
//            sum1 += vec1[i];
//            count++;
//            if (sum1>=x)
//            {
//                break;
//            }
//        }
//        cout<<count<<endl;
//        }
//   }
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
     long long a,b,c,n,x,i,sum1,sum2,sum3=0;
     cin>>n>>x;

     vector<int> vec1;
     for (int i=0; i<n; i++)
       {
         long long element;
         cin>>element;
         vec1.push_back(element);
       }
       sort(vec1.rbegin(), vec1.rend());

       sum1 = 0;
       long long count = 0;
       for(auto z : vec1) sum3+=z;
       if (sum3<x)
       {
           cout<<"-1"<<endl;
       } 
       else {
       for (i=0; i<n; i++)
       {
           sum1 += vec1[i];
           count++;
           if (sum1>=x)
           {
               break;
           }
       }
       cout<<count<<endl;
       } 
  }
}
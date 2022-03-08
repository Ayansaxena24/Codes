#include<iostream>
#include<vector>
using namespace std;

int main() {
    int sum=0,t,m,n,q;
    cin>>t;
    while (t--)
    {
        cin>>m>>n>>q;
        vector<int> vec1;

        for (int i=0; i<q; i++)
         {
           int element;
           cout<<"Enter an element to add to this vector";
           cin>>element;
           vec1.push_back(element);
         }

         for (int i=0; i<q; i++)
         {
             
             sum = vec1[i] + sum;
             if (sum>m)
             {
                 cout<<"inconsistent"<<endl;
                 return 0;
             }
             

         }
         if (sum<m)
         {
             cout<<"consistent"<<endl;
         }
    }

    return 0;
}
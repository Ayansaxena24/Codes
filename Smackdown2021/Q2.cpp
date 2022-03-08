#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,d,e,i,count1=0,count2=0,count3=0,sum1,sum2;

        vector<int> vec1;

        for (int i=0; i<5; i++)
         {
           int element;
           //cout<<"Enter an element to add to this vector";
           cin>>element;
           vec1.push_back(element);
         }

         for (i=0; i<5; i++)
         {
             if (vec1[i]==0)
             {
                 count1++;
             }
             if (vec1[i]==1)
             {
                 count2++;
             }
             if (vec1[i]==2)
             {
                 count3++;
             }
         }

         if (count2>count3)
         {
             cout<<"INDIA"<<endl;
         }
         else if (count3>count2)
         {
             cout<<"ENGLAND"<<endl;
         }
         else 
         {
             cout<<"DRAW"<<endl;
         }

        //  if (count1>count2 && count1>count3)
        //  {
        //      cout<<"DRAW"<<endl;
        //  }
        //  else if (count2>count1 && count2>count3)
        //  {
        //      cout<<"INDIA"<<endl;
        //  }
        //  else if (count3>count1 && count3>count2)
        //  {
        //      cout<<"ENGLAND"<<endl;
        //  }
        //  else if (count1>=count2 && count1>count3)
        //  {
        //      cout<<"DRAW"<<endl;
        //  }
        //  else if (count1>count2 && count1>=count3)
        //  {
        //      cout<<"DRAW"<<endl;
        //  }
        //  else if (count2>=count1 && count2>count3)
        //  {
        //      cout<<"INDIA"<<endl;
        //  }
        //  else if (count2>count1 && count2>=count3)
        //  {
        //      cout<<"INDIA"<<endl;
        //  }
        //  else if (count3>=count1 && count3>count2)
        //  {
        //      cout<<"ENGLAND"<<endl;
        //  }
        //  else if (count3>count1 && count3>=count2)
        //  {
        //      cout<<"ENGLAND"<<endl;
        //  }

    }
}
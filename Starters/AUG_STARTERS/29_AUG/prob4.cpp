#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans,i,n,k,z,t;
    cin>>t;
    while(t--)
    { 
        vector<int> vec1;
        vector<int> vec2;
    
    int element,len;
    cout<<"Enter the size of your vector: "<<endl;
    cin>>len;
    for (int i=0; i<len; i++)
    {
        //cout<<"Enter an element to add to this vector";
        cin>>element;
        vec1.push_back(element);
    }
    int sum1,sum2;
    sum1 = accumulate(vec1.begin(),vec1.end(),0);
    cout<<sum1<<endl;
   

    for (int i=0; i<len-1; i++)
    {
        //cout<<"Enter an element to add to this vector";
        cin>>element;
        vec2.push_back(element);     
    }

      sum2 = accumulate(vec2.begin(),vec2.end(),0);
          cout<<sum2<<endl;



    sort(vec1.begin(), vec1.end());
    sort(vec2.begin(), vec2.end());
    
    for (i=0; i<len; i++)
    {
       int y,z;
       y = (sum2 - sum1 + vec1[i]);
       z = y/(len-1);
       
       if (y%(n-1)==0)
       { 
           ans = min(ans,z);
       }
      

    }
    
     cout<<ans<<endl;
    }
    return 0;
}

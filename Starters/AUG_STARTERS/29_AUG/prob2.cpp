#include<iostream>
using namespace std;

int main() {
    int i,n,r,z,k,t,ans,sum;
    cin>>t;
    for (i=1; i<=t; i++)
    {
    cin>>n;
    cin>>k;
    cin>>sum;
    
    r = {sum - (n+n*(n-1))};
    ans = r/(k-1);
   
    cout<<ans<<endl;
    }
    return 0;
}
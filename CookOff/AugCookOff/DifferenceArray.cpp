#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,t;
    cout<<"Enter number of test cases"<<endl;
    cin>>t;   //test case
    while (t--){
        cout<<endl;
    cin>>r;
    if (r>=2000) 
    cout<<1;
    if (r>=1600 && r<2000)
    cout<<2;
    if (r<1600)
    cout<<3;
}
    return 0;
}
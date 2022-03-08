#include<iostream>
using namespace std;

int main() {
    int a,b,c,i,t;
    cin>>t; //number of test cases
    for (i=1; i<=t; i++)
    {
        cin>>a;
        cout<<" ";
        cin>>b;
        cout<<" ";
        cin>>c; 

        if (c<a && c<b)
        cout<<"Alice"<<endl;
        if (b<a && b<c)
        cout<<"Bob"<<endl;
        if (a<b && a<c)
        cout<<"Draw"<<endl;

    }


    return 0;
}
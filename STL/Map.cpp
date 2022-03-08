#include<iostream>
#include<map>
#include<string>

using namespace std;

int main() {
    map<string, int> marksmap;
    marksmap["Student 1"]=99;
    marksmap["Student 2"]=99;
    marksmap["Student 3"]=99;

    map<string, int> :: iterator iter;
    for(iter=marksmap.begin(); iter!=marksmap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }

  
    return 0;
}
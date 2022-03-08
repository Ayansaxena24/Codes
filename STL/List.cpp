#include<iostream>
#include<list>

using namespace std;

void display( list<int> &lst ) {
    list<int> :: iterator it;
    for (it=lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it<<" ";
        
    }
    cout<<endl;
}

int main() {
    //6 7 8
    list<int>list1;    //list of 0 length 
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    list1.pop_back(); //deletes the last element
    list1.pop_front(); //deletes the fist element
    list1.remove(9);  //removes element "9"
    
    list1.sort(); //sorting the elements

    list<int>list2(3); //empty list of size 7
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    display(list2);

    display (list1);

    list1.merge(list2);  ///merging lists
    cout<<"List 1 after merging: ";
    display(list1);

    list1.reverse();
    display(list1);

/* list<int> :: iterator iter;  (iski jagah void display use kiya upar)
    iter = list1.begin();
    cout<< *iter<<" ";
    iter++;
    cout<<*iter<<" ";
    iter++;
    cout<<*iter<<" ";
    iter++;
    cout<<*iter<<" "; */

    
      
    return 0;
}
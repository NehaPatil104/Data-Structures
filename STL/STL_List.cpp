#include<iostream>
#include<list>

using namespace std;

int main(){

    // List
    list<int> l;

    l.push_back(20);
    l.push_back(10);
    l.push_front(30);
    cout<<"Element->";
    for(int i : l){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Is Empty-> "<<l.empty()<<endl;
    cout<<"Size-> "<<l.size()<<endl;
}
#include<iostream>
#include<deque>

using namespace std;

int main(){
    // Dequeue

    deque<int> d;

    d.push_back(10);
    d.push_front(20);
    cout<<"Elements-> "<<endl;
    for(int i : d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_back();
    cout<<"Elements-> "<<endl;
    for(int i : d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.push_front(30);
    d.push_front(10);
    cout<<"Front-> "<<d.front()<<endl;
    cout<<"Back-> "<<d.back()<<endl;
    cout<<"Size-> "<<d.size()<<endl;
    cout<<"Is Empty-> "<<d.empty()<<endl;
    cout<<"Element at 2-> "<<d.at(2)<<endl;
    cout<<"Elements-> "<<endl;
    for(int i : d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.erase(d.begin(), d.begin()+2);
    cout<<"Elements-> "<<endl;
    for(int i : d){
        cout<<i<<" ";
    }
    cout<<endl;

}
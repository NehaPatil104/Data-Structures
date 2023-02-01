#include<iostream>
#include<vector>

using namespace std;

int main(){
    // Vector
    vector <int> v(4,1);

    cout<<"Capacity-> "<<v.capacity()<<endl;
    v.push_back(11);
    v.push_back(16);
    v.push_back(78);
    cout<<"Capacity-> "<<v.capacity()<<endl;
    cout<<"Size-> "<<v.size()<<endl;
    v.push_back(16);
    v.push_back(78);
    cout<<"Capacity-> "<<v.capacity()<<endl;
    cout<<"Size-> "<<v.size()<<endl;
    cout<<"Element at 4-> "<<v.at(4);
    cout<<"At Front-> "<<v.front()<<endl;
    cout<<"At Back-> "<<v.back()<<endl;
    v.pop_back();
    cout<<"At Back-> "<<v.back()<<endl;
    cout<<"Vector elements: "<<endl;
    for(int i: v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.clear();
    cout<<"Capacity-> "<<v.capacity()<<endl;
    cout<<"Size-> "<<v.size()<<endl;


}
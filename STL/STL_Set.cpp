#include<iostream>
#include<set>

using namespace std;

int main(){

    // Set- implemented using BST and elements fetched are in sorted order
    set<int> s;
    // Insert complexity O(logn)
    s.insert(5);
    s.insert(10);
    s.insert(15);
    s.insert(3);
    s.insert(9);;
    cout<<"Elements: ";
    for(int i : s){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Is 15 present-> "<<s.count(15)<<endl;
    set<int>::iterator it = s.begin();
    set<int>::iterator itr = s.find(10);
    for(auto it = itr; it != s.end(); it++){
        cout<<*it<<" ";
    }
}
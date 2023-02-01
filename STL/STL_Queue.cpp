#include<iostream>
#include<queue>

using namespace std;

int main(){

    // List
    queue<string> s;

    s.push("Neha");
    s.push("Sadanand");
    s.push("Patil");
    cout<<"First Element-> "<<s.front()<<endl;
    s.pop();
    cout<<"First Element-> "<<s.front()<<endl;

    cout<<"Is Empty-> "<<s.empty()<<endl;
    cout<<"Size-> "<<s.size()<<endl;
}
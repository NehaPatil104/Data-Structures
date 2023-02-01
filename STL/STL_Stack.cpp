#include<iostream>
#include<stack>

using namespace std;

int main(){

    // List
    stack<string> s;

    s.push("Neha");
    s.push("Sadanand");
    s.push("Patil");
    cout<<"Top Element-> "<<s.top()<<endl;
    s.pop();
    cout<<"Top Element-> "<<s.top()<<endl;
    cout<<"Is Empty-> "<<s.empty()<<endl;
    cout<<"Size-> "<<s.size()<<endl;
}
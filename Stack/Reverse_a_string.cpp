#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<char> s;
    string name;
    cout<<"Enter word : ";
    cin>>name;

    for(int i = 0; i < name.length(); i++){
        s.push(name[i]);
    }

    string ans = "";
    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout<<"Reverse : "<<ans<<endl;
}
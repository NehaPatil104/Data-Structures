#include<iostream>
#include<map>

using namespace std;

int main(){

    map<int, string> m;
    m[1] = "Doremon";
    m[2] = "Ninja Hattori";
    m[3] = "Nobita";

    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }


    cout<<"Count->"<<m.count(2)<<endl;
    m.erase(2);
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(3);
    for(auto i = it; i != m.end(); i++){
        cout<<(*i).second<<" ";
    }
}
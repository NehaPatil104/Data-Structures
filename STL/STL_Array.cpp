#include<iostream>
#include<array>

using namespace std;

int main(){

    //Array
    array<int,4> a = {1, 2, 3, 4};

    cout<<"Size: "<<a.size()<<endl;
    cout<<"Is Empty: "<<a.empty()<<endl;
    cout<<"Element at index 3: "<<a.at(3)<<endl;
    cout<<"At front: "<<a.front()<<endl;
    cout<<"At Back: "<<a.back()<<endl;

    return 0;
}
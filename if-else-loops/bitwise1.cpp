#include<iostream>
using namespace std;

int main(){

    int a = 2, b = 6;

    cout<<"\n";
    cout<<" a & b: "<<(a&b)<<"\n";
    cout<<" a | b: "<<(a|b)<<"\n";
    cout<<" ~a   : "<<(~a)<<"\n";
    cout<<" a ^ b: "<<(a^b)<<"\n";
    cout<<"\n";

    int i = 5;

    cout<<"(i++) : "<< i++ <<endl;
    // 5, 6
    cout<<"(++i) : "<< ++i <<endl;
    //7
    cout<<"(i--) : "<< i-- <<endl;
    //7, 6
    cout<<"(--i) : "<< --i <<endl;
    // 5

    return 0;
}
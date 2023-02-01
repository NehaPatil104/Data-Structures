#include<iostream>
using namespace std;

int main(){

    char c;
    cout<<"Enter a character: "<<endl;
    cin>> c;

    if(c >=97 && c <= 122){
        cout<<c<<" is Lowercase"<<endl;
    }
    else if(c >= 65 && c <= 90){
        cout<<c<<" is Uppercase"<<endl;
    }
    else{
        cout<<c<<" is a number"<<endl;
    }

    return 0;
}

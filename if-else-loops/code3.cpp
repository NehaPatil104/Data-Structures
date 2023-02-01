#include<iostream>
using namespace std;

int main(){

    float f=0, c;
    
    while(f <=300){
        c = ((f - 32)*5)/9;
        cout<<f<<"\t\t"<<c<<endl;
        f+=20;
    }

    return 0;
}
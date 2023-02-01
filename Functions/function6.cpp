#include<iostream>
using namespace std;

int countBits(int n){

    int bits = 0;

    while(n!=0){
        if(n & 1){
            bits++;
        }
        n = n >> 1;
    }

    return bits;
}

int main(){

    int a, b;
    cout<<"Enter number a & b: ";
    cin>> a >> b;

    cout<<"No of bits: "<<(countBits(a) + countBits(b))<<endl;

    return 0;
}
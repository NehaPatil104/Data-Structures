#include<iostream>
using namespace std;

int factorial(int num){

    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact *= i;
    }

    return fact;
}

int nCr(int n, int r){
    return ( factorial(n) / ( factorial(r) * factorial(n-r)));
}

int main(){

    int n, r;
    cout<<"Enter value of n and r: ";
    cin>>n>>r;

    cout<<"nCr : "<<nCr(n,r)<<endl;

    return 0;
}
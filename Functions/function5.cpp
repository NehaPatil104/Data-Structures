#include<iostream>
using namespace std;

int AP(int n){

    return 3*n+7;
}

int main(){

    int n;
    cout<<"Enter number: ";
    cin>>n;

    cout<<"AP: "<<AP(n)<<endl;

    return 0;
}
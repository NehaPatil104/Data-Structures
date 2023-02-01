// Finding the power of number
#include<iostream>
using namespace std;

int power(int b, int p){
    
    int ans = 1;

    for(int i = 1; i <= p; i++){

        ans *= b;
    }

    return ans;
}

int main(){

    int b,p;
    cout<<"Enter the base and power: ";
    cin>>b>>p;

    cout<<"Answer is "<<power(b, p)<<endl;

    return 0;
}
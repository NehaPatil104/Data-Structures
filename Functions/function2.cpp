#include<iostream>
using namespace std;

bool isEven(int n){

    if(n & 1 == 1){
        return false;
    }

    return true;
}

int main(){

    int n;
    cout<<"Enter number: ";
    cin>>n;

    cout<<n<<" is "<<isEven(n)<<endl;

    return 0;
}
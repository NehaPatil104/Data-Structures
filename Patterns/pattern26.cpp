#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter row: ";
    cin>>n;

    int i = 1;
    while(i <= n){

        //First Triangle
        int j = 1;
        while(j <= (n-i+1)){
            cout<<j<<" ";
            j++;
        }

        //Second Triangle
        int k = 1;
        while(k <= ((i - 1) * 2)){
            cout<<"* ";
            k++;
        }

        //Third Triangle
        int l = n-i+1;
        while(1 <= l){
            cout<<l<<" ";
            l--;
        }

        cout<<"\n";
        i++;
    }

    return 0;
}
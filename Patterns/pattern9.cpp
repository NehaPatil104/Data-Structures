#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the rows: ";
    cin>>n;

    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= i){
            cout<<(i-j+1)<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }

    return 0;
}
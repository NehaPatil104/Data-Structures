#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter row: ";
    cin>>n;
    
    for(int i = 1; i <= n; i++){

        int space = n - i;
        for(int j = 1; j <= space; j++){
            cout<<"  ";
        }

        for(int k = 1; k <= i; k++){
            cout<<"* ";
        }
        cout<<"\n";
    }

    return 0;
}
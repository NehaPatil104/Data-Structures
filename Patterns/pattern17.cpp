#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter row: ";
    cin>>n;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<(char)('A' + n - i + j - 1)<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
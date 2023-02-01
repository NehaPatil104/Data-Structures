#include<iostream>
#include<algorithm>
using namespace std;

void moveZeros(int arr[], int n){
    int j = 0;

    for(int i = 0; i < n; i++){
       if(arr[i] != 0){
            swap(arr[j++], arr[i]);
       }
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    moveZeros(a, n);
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
}
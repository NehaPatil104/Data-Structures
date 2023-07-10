#include<iostream>

using namespace std;

void insertionSort(int arr[], int n){

    int i = 1, j, temp;
    while(i < n){
        temp = arr[i];
        j = i - 1;
        
        while(j >= 0 && arr[j] > temp){
            arr[j + 1] = temp;
            j--;
        }
        arr[j+1] = temp;
        i++;
    }

}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    insertionSort(arr, n);

    cout<<"Sorted Array-> ";
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";

    
    return 0;
}
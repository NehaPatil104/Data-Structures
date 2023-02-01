#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
    cout<<"Reverse array: ";

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main(){

    int size;
    int ele;
    cout<<"Enter size: ";
    cin>>size;

    int arr[size];
    cout<<"Enter "<<size<<" values: ";

    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    reverseArray(arr, size);

    return 0;
}
// Maximum and minimum value of array
#include<iostream>
#include<limits.h>
using namespace std;

int getmax(int arr[], int size){

    int max = INT_MIN;

    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}

int getmin(int arr[], int size){

    int min = INT_MAX;

    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    return min;
}

int main(){

    int size;
    cout<<"Enter size: ";
    cin>>size;

    int arr[size];
    cout<<"Enter "<<size<<" values: ";
    
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    cout<<"Maximum value: "<< getmax(arr, size)<<endl;
    cout<<"Minimum value: "<< getmin(arr, size)<<endl;

    return 0;
}
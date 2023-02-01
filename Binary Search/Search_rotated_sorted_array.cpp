#include<iostream>
using namespace std;

int findPivot(int arr[], int n){

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;

    while(s < e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e - s)/2;
    }

    return s;
}

int binarySearch(int arr[], int s, int e, int key){
    int start = s;
    int end = e ;
    int mid = start +(end - start)/2;

    while (start <= end)
    {
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start +(end - start)/2;
    }

    return -1;
}

int main(){

    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter element to be search: ";
    cin>>key;

    int pivot = findPivot(arr, n);

    if(key >= arr[pivot] && key <= arr[n - 1]){
        cout<<"Index: "<<binarySearch(arr, pivot, n - 1, key)<<endl;
    }
    else{
        cout<<"Index: "<<binarySearch(arr, 0, pivot - 1, key)<<endl;
    }
    return 0;
}
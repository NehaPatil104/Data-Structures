#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = (s + e)/2;

    //find the length of the left and right part
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainIndex = s;
    for(int i = 0; i < len1; i++){
        first[i] = arr[mainIndex++];
    }

    mainIndex = mid + 1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[mainIndex++];
    }

    //merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainIndex = s;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainIndex++] = first[index1++];
        }
        else{
            arr[mainIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainIndex++] = first[index1++];
    }
    
    while (index2 < len2)
    {
        arr[mainIndex++] = second[index2++];
    }

    delete []first;
    delete []second;
}

void mergesort(int *arr, int s, int e){

    //base case
    if(s >= e){
        return;
    }
    int mid = (s + e)/2;
    //Sort left part
    mergesort(arr, s, mid);

    //Sort right part
    mergesort(arr, mid + 1, e);

    //merge

    merge(arr, s, e);
}

int main(){
    int arr[10] = {11, 104, 504, 33, 7, 45, 2, 0, 27, 15};
    int n = 10;

    mergesort(arr, 0, n-1);

    cout<<"Sorted Array -> ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
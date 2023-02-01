#include<iostream>
using namespace std;
int select(int arr[], int i, int n){
    int minEle = i;
    for(int j = i + 1; j < n; j++){
        if(arr[j] < arr[minEle])
            minEle = j;
    }
    return minEle;
}
void selectionSort(int arr[], int n)
{
    int i;
    for(i = 0; i < n-1; i++){
        int minEle = select(arr, i, n);
        int temp = arr[minEle];
        arr[minEle] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    selectionSort(arr, n);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}
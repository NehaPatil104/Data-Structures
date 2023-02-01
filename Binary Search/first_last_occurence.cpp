#include<iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }

    return ans;
}

int lastOccurence(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }

    return ans;
}


int main(){

    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" elements: ";

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    int key;
    cout<<"Enter key: ";
    cin>>key;

    cout<<"First Occurence: "<<firstOccurence(arr, n, key)<<endl;
    cout<<"Last Occurence: "<<lastOccurence(arr, n, key)<<endl;

    return 0;
}
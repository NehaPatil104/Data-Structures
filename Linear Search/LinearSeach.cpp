#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return true;
        }
    }

    return false;
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

    cout<<"Enter the element to search: ";
    cin>>ele;

    bool isFound = linearSearch(arr, size, ele);

    if(isFound){
        cout<<ele<<" is found!"<<endl;
    }
    else{
        cout<<ele<<" is not found!"<<endl;
    }

    return 0;
}
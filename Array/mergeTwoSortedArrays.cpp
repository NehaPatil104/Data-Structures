#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void mergeSortedArray(int a1[], int n1, int a2[], int n2, int a3[]){
    int i = 0, j = 0, k = 0;

    while(i < n1 && j < n2){
        if(a1[i] < a2[j]){
            a3[k++] = a1[i++]; 
        }
        else{
            a3[k++] = a2[j++];
        }
    }

    while(i < n1){
        a3[k++] = a1[i++];
    }

    while (j < n2)
    {
        a3[k++] = a2[j++];
    }
    
}

int main(){

    int n1;
    cin>>n1;
    int a1[n1];
    for(int i = 0; i < n1; i++){
        cin>>a1[i];
    }

    int n2;
    cin>>n2;
    int a2[n2];
    for(int i = 0; i < n2; i++){
        cin>>a2[i];
    }

    int n = n1 + n2;
    int a3[n];

    mergeSortedArray(a1, n1, a2, n2, a3);

    for(int i = 0; i < n; i++){
        cout<<a3[i]<<" ";
    }
    return 0;
}
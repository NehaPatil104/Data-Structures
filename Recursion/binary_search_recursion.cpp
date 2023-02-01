//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  
    int search(int arr[], int s, int e, int k){
        if(s > e){
            return -1;
        }
        
        int mid = s + (e - s)/2;
        
        if(arr[mid] == k){
            return mid;
        }
        
        if(arr[mid] > k)
            return search(arr, s, mid - 1, k);
        else
            return search(arr, mid + 1, e, k);
    }
    
    int binarysearch(int arr[], int n, int k) {
        return search(arr,0, n-1, k);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends
//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int arraySum(int arr[], int n, int ans) {
        if(n == 0){
            return ans;
        }
        ans += arr[0];
        arraySum(arr+1, n-1, ans);
    }
};

//{ Driver Code Starts.

int main() {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        int ans = ob.arraySum(arr, n, 0);
        cout << ans << "\n";
    return 0;
}

// } Driver Code Ends
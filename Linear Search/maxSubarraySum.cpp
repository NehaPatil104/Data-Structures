#include<iostream>
#include<climits>
#include<math.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    //kadane's algo
    int sum = 0;
    int maxSum = INT_MIN;
    for(int i = 0; i < n; i++){
       sum += a[i];
       maxSum = max(maxSum, sum);
       if( sum < 0)
            sum = 0;
    }


    // for(int i = 0; i < n; i++){
    //     int sum = 0;
    //     for(int j = i; j < n; j++){
    //         sum += a[j];
    //         maxSum = max(maxSum, sum);
    //     }
    // }
   

    // for(int i = 0; i < n; i++){
    //     for(int j = i; j < n; j++){
    //         int sum = 0;
    //         for(int k = i; k <= j; k++){
    //             sum += a[k];
    //         }
    //         maxSum = max(maxSum, sum);
    //     }
    // }

    cout<<maxSum<<endl;

    return 0;
}
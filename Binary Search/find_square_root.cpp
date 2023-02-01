#include<iostream>
using namespace std;

int floorSqrt(long long int x) 
    {
        int s = 0;
        int e = x;
        int mid = s + (e - s)/2;
        int ans = -1;
        int square;
        
        while(s <= e){
            square = mid * mid;
            
            if(square == x)
                return mid;
                
            if(square < x){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            
            mid = s + (e - s)/2;
        }
        
        return ans;
    }



int main(){

    int n;
    cin>>n;

    cout<<"Square root: "<< floorSqrt(n);
    return 0;
}
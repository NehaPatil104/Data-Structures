// Binary to Decimal 

#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int n;
    cout<<"Enter number: ";
    cin>>n;

    int i = 0;
    int ans = 0;
    int digit = 0;

    while(n != 0){
        digit = n % 10;
        if(digit == 1){
            ans = pow(2, i) + ans;
        }
        n = n / 10;
        i++;
    }

    cout<<"Anser is "<< ans<<endl;
    return 0;
}
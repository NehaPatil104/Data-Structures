#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: \n";
    cin>>n;

    int i = 2, sum = 0;

    while (i<=n)
    {
        if(i%2 == 0){
            sum+= i;
        }
        i++;
    }

    cout<<"Sum of even numbers from 0 to "<<n<<" is "<<sum<<endl;
    

    return 0;
}   
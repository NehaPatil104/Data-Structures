#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the rows: ";
    cin>>n;

    int i = 1;
    int k= 1;
    while(i <= n){
        int j = 1;
        while (j <= n)
        {
            cout<<k++<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }

    return 0;
}
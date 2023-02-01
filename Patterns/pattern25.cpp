#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter row: ";
    cin>>n;
    int i = 1;
    while(i <= n){

        // For first triangle        
        int space = n - i;
        while(space >= 1){
            cout<<"  ";
            space--;
        }

        // For second triangle
        int j = 1;
        while(j <=i){
            cout<<j<<" ";
            j++;
        }

        // For third triangle
        int start = i - 1;
        while(start){
            cout<<start<<" ";
            start --;
        }
        
        cout<<"\n";
        i++;
    }
   

    


    return 0;
}
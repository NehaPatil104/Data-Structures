#include<iostream>
using namespace std;

int main(){

    char str[50];
    cout<<"Enter string: ";
    cin>>str;

    int cnt=0;
    while(str[cnt] != '\0'){
        cnt++;
    }
    cout<<"Length of "<<str<<" is "<<cnt<<endl;
}
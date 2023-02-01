#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    char str[20];
    cin>>str;

    int cnt=0;
    while(str[cnt] != '\0'){
        cnt++;
    }

    int start = 0, end = cnt - 1;
    while(start <= end){
        swap(str[start++], str[end--]);
    }

    cout<<"Reversed string-> "<<str<<endl;
}
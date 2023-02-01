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
    bool ans = true;
    int start = 0, end = cnt - 1;
    while(start <= end){
        if(str[start++] != str[end--]){
            ans = false;
        }
    }

    if(ans){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
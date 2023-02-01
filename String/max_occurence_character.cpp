#include<iostream>
using namespace std;

char maxOccurence(string s){
    int ch[26] = {0};
    int number;
    for(int i = 0; i < s.length(); i++){
        number = 0;
        number = s[i] - 'a';
        ch[number]++;
    }

    int maxi = -1, ans = -1;
    for(int i = 0; i < 26; i++){
        if(maxi < ch[i]){
            ans = i;
            maxi = ch[i];
        }
    }

    char chr = ans + 'a';
    return chr;
}

int main(){

    string s;
    cin>>s;
    cout<<"Maximum Occurence=> "<<maxOccurence(s)<<endl;
}
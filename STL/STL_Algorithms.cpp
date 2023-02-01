#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    vector<int> v;
    v.push_back(5);
    v.push_back(7);
    v.push_back(10);
    v.push_back(14);
    v.push_back(20);

    cout<<"Searching 14->"<<binary_search(v.begin(), v.end(), 14)<<endl;
    cout<<"Searching 1->"<<binary_search(v.begin(), v.end(), 1)<<endl;

    cout<<"Lower bound->"<<lower_bound(v.begin(), v.end(), 10) - v.begin()<<endl;
    cout<<"Upper bound->"<<upper_bound(v.begin(), v.end(), 10) - v.begin()<<endl;

    int a = 12, b = 16;
    cout<<"Maximum-> "<<max(a, b)<<endl;
    cout<<"Minimum-> "<<min(a, b)<<endl;

    swap(a, b);
    cout<<"a -> "<<a<<" "<<"b-> "<<b<<endl;

    string s = "abcdef";
    reverse(s.begin(), s.end());
    cout<<"Reverse-> "<<s<<endl;

    rotate(v.begin(), v.begin()+3, v.end());
    cout<<"After rotating-> ";
    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    sort(v.begin(), v.end());
    cout<<"After sorting-> ";
    for(int i : v){
        cout<<i<<" ";
    }

}
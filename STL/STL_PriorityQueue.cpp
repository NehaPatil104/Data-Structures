#include<iostream>
#include<queue>

using namespace std;

int main(){

    // Priority Queue - Max Heap
    priority_queue<int> maxi;
    maxi.push(20);
    maxi.push(10);
    maxi.push(40);
    int n = maxi.size();
    cout<<"Elements: ";
    for(int i = 0; i < n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    // Min Heap
    priority_queue<int, vector<int>, greater<int> > mini;
    mini.push(20);
    mini.push(10);
    mini.push(40);
    n = mini.size();
    cout<<"Elements: ";
    for(int i = 0; i < n; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    
    
}
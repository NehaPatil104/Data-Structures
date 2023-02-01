#include<iostream>
using namespace std;

class Stack{
    int size;
    int *arr;
    int top;

    public:
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data){
        if(size - top > 1){
            top++;
            arr[top] = data;
        }
        else{
            cout<<"Stack overflow!"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack Underflow!"<<endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout<<"Stack Underflow!"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

    void Print(){
        cout<<"Stack elements -> ";
        for(int i = top; i >= 0; i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){

    Stack s(5);

    s.push(105);
    s.push(111);
    s.push(74);
    s.Print();

    cout<<"Peek: "<<s.peek()<<endl;
    cout<<"IsEmpty: "<<s.isEmpty()<<endl;
    s.pop();
    cout<<"Peek: "<<s.peek()<<endl;
    cout<<"IsEmpty: "<<s.isEmpty()<<endl;
     s.pop();
    cout<<"Peek: "<<s.peek()<<endl;
    cout<<"IsEmpty: "<<s.isEmpty()<<endl;
     s.pop();
    cout<<"Peek: "<<s.peek()<<endl;
    cout<<"IsEmpty: "<<s.isEmpty()<<endl;
    return 0;
}
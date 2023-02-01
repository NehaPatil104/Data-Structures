#include<iostream>
using namespace std;

int main(){

    int amount;
    cout<<"Enter the amount: ";
    cin>>amount;

    int Rs100, Rs50, Rs20, Rs10;

   switch(1){
        case 1: Rs100 = amount / 100;
                amount %= 100;
                cout<<"100 Rs notes requires are "<<Rs100<<endl;
        
        case 2: Rs50 = amount / 50;
                amount %= 50;
                cout<<"50 Rs notes requires are "<<Rs50<<endl;
        
        case 3: Rs20 = amount / 20;
                amount %= 20;
                cout<<"20 Rs notes requires are "<<Rs20<<endl;

        case 4: Rs10 = amount / 10;
                amount %= 10;
                cout<<"10 Rs notes requires are "<<Rs10<<endl;
                break;
   }
}
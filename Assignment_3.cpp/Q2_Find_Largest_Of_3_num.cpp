//Write a program in C++ to find the largest number among three given numbers.
// 1. If two or more numbers are equal and are the largest, display a message like:
// "Two numbers are equally the largest!"
// 2. Add a condition where if all three numbers are equal, display a message: "All numbers are equal!"

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 numbers:"<<endl;
    cin>>a>>b>>c;
    
    if(a==b and b==c){
        cout<<"All Numbers are Equal";
    }
    else if(a==b and b>c){
        cout<<"Two Equal Numbers are Largest";
    }
    else if(a==c and c>b){
        cout<<"Two Equal Numbers are Largest";
    }
    else if(b==c and c>a){
        cout<<"Two Equal Numbers are Largest";
    }

    else{
    if(a>b and b>c){
        cout<<"The Largest number is: "<<a;
    }
    else if(b<c){
        cout<<"The Largest number is: "<<c;
    }
    else{
        cout<<"The Largest number is: "<<b;
    }
    }
    return 0;
}

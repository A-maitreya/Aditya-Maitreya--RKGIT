//Q3)C++ program to Calculate Factorial of a Number Using Recursion

#include<iostream>
using namespace std;
int fac(int n){
    if(n==1 or n==0)
    return 1;
    else
    return (n*fac(n-1));
}

int main(){
    int n;
    cout<<"Enter An Number: ";
    cin>>n;
    cout<<"Factorial is: "<<fac(n);

}
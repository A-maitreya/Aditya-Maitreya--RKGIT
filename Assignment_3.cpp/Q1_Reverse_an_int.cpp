//Write a program in C++ to reverse a given integer.

#include<iostream>
using namespace std;
int main()
{
    int n;
    int rev=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    cout<<"Reversed Number is: "<<rev;
}
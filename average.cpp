#include<iostream>
using namespace std;
int main(){
    float num1,num2,sum,average;
    cout<<"Enter the first number = ";
    cin>>num1;
    cout<<"Enter the second number = ";
    cin>>num2;

    sum = num1+num2;
    average = sum/2;
    cout<<"The sum of two numbers are = "<<sum;
    cout<<"Average of two numbers are = "<<average;
}
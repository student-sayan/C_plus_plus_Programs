#include<iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}

int main(){
    int num1, num2, answer;
    cout<<"Enter the first number = ";
    cin>>num1;
    cout<<"Enter the second number = ";
    cin>>num2;

    answer = sum(num1,num2);
    cout<<"Sum of two numbers are = "<<answer<<endl;
    return 0;
}
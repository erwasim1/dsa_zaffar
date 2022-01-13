#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0)return 1;

    return n*factorial(n-1);
}

int main(){
    int n;
    cout<<"Enter the value "<<endl;
    cin>>n;
    int ans=factorial(n);\
    cout<<"Factorial of a given number is  "<<ans<<endl;
}
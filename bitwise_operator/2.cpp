#include<iostream>
using namespace std;
//fibonaci series
/*
int main(){
    int a=0;
    int b=1;
    cout<<a<<"-->"<<b<<" -->";
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        int next=a+b;
        cout<<next<<"--->";
        a=b;
        b=next;
    }
}
*/

//prime number
int main(){
    int n;
    cout<<"enter the values of n";
    cin>>n;
    bool isprime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
           // cout<<"not prime";
            isprime=0;
            break;
            
        }
    }
        if(isprime==0){
            cout<<"This is a non prime number";

        }
        else{
            cout<<"This is a prime number";
        }
     
}
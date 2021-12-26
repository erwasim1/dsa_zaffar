#include<iostream>
using namespace std;

void printArray(int num[] ,int n){
    for(int i=0;i<=n;i++){
         num[i]=2;
        cout<<num[i]<<" ";
    }

}

int main(){
    //ARRAY DECLEARATON
    int n;
    int num[n];
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    printArray(num,n);
    
}
#include<iostream>
using namespace std;
 int findsum(int arr[],int n){
     int sum=0;
     for(int i=0;i<n;i++){
         sum+=arr[i];
     }
     return sum;
 }
int main(){
     int n;
    cout<<"enter the size of the array"<<" ";
    cin>>n;
    int arr[n];
    //INITIALIZATION 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

  cout<<"THE SUM OF NUMBERS IS"<<findsum(arr,n);
}
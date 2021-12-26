#include<iostream>
using namespace std;
 int findsum(int arr[],int n){
     int sum=0;
     for(int i=0;i<n;i++){
         sum+=arr[i];
     }
     return sum;
 }
 bool Lsearch(int arr[],int n,int k){
   for(int i=0;i<n;i++){
       if(arr[i]==k){
       return true;
       }
     
      
   }
     return 0;
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
    int k;
    cout<<"enter the element u want to seach"<<endl;
    cin>>k;
    cout<<Lsearch(arr,n,k);
    
}
//Question lINK->https://bit.ly/3dm6bdZ ]

#include<iostream>
#include<algorithm>
using namespace std;
void printArray(int arr[],int n){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int Duplicate(int arr[],int n){
     /*************BRUTE FORCE**************/
  /*   int sum=0;
   
     for(int i=0;i<=n-1;i++){
         sum=sum+arr[i];
     }
      return (((n*(n+1))/2)-sum);
      */
   
  //***************************//
 /*
  int ans=0;
  for(int i=0;i<n;i++){
      ans=ans^arr[i];
  } 
  for(int i=1;i<n;i++){
      ans=ans^i;
  } 

     return ans;
     */
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
      if(arr[i]==arr[i+1]){
      return arr[i];
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

    printArray(arr,n);
    cout<<"Duplicate Element is"<<Duplicate(arr,n);
}
#include<iostream>
#include<algorithm>
using namespace std;

int getMax(int arr[],int n){
   // int max=INT_MIN;
   int maxo=INT_MIN;

 for(int i=0;i<n;i++){
     
     //if(arr[i]>max){
    //     max=arr[i];
    // }
    maxo=max(maxo,arr[i]);
 }
 //return max;
 return maxo;
}

int getMin(int arr[],int n){
    int min=INT_MAX;

 for(int i=0;i<n;i++){
     if(arr[i]<min){
         min=arr[i];
     }
 }
 return min;
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
  /*  sort(arr,arr+n);
    cout<<"Maximum value is "<<arr[n-1]<<endl;
    cout<<"Minimum value is "<<arr[0]<<endl;
*/
     cout<<"Maximum value is "<<getMax(arr,n)<<endl;
     cout<<"Minimum value is "<<getMin(arr,n);
}
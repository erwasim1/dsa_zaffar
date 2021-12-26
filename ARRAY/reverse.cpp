#include<iostream>
using namespace std;

//swap 
/*
void printReverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
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
    printReverse(arr,n);
}
*/
//print array
void printArray(int arr[],int n){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

//swap ALTERNATE 
void swapAlternate(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i+1],arr[i]);
        }
    }
    
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

    swapAlternate(arr,n);
     printArray(arr,n);
     
    


}
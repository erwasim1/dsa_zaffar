#include <iostream>
using namespace std;

void printArray(int arr[],int n){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
/*void Bubble_Sorting(int arr[] ,int n){
    for(int i=1;i<n-1;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j+1]<arr[j])
            swap(arr[j],arr[j+1]);
        }
    }
}
*/
/*
void insertion_Sort(){
    void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    for(int i=1;i<n;i++){
        
        int temp=arr[i];
        int j=i-1;
        for( ; j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            
        }
    
     arr[j+1]=temp;
}
       
}
}
*/

void Bubble_Sorting(int *arr,int n){

    //base case 
    if(n==0||n==1){
        return;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    Bubble_Sorting(arr,n-1);
}
int main(){
    int arr[5]={3,1,5,2,7};

    printArray(arr,5);
    cout<<endl;
    cout<<"After sorting the array is "<<endl;
    Bubble_Sorting(arr,5);
    printArray(arr,5);
    
    }
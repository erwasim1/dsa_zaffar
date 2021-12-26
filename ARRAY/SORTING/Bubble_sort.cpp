#include <iostream>
using namespace std;

void printArray(int arr[],int n){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void Bubble_Sorting(int arr[] ,int n){
    for(int i=1;i<n-1;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j+1]<arr[j])
            swap(arr[j],arr[j+1]);
        }
    }
}

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

int main(){
    int arr[5]={3,1,5,2,7};

    printArray(arr,5);
    cout<<endl;
    cout<<"After sorting the array is "<<endl;
    Bubble_Sorting(arr,5);
    printArray(arr,5);
    
    }
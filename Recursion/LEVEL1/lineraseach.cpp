#include<iostream>
using namespace std;

void print(int arr[],int n){
    cout<<"Size of Array is "<<n<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

bool search(int *arr,int size,int key){
    print(arr,size);
    //base case
    if(size==0) return false;

    if(arr[0]==key){
        return true;
    }else{
        bool remaining=search(arr+1,size-1,key);
        return remaining;
    }
}

int main(){
    int arr[5]={2,3,5,6,7};
    int size=5;
    int key=3;
    bool ans=search(arr,size,key);
    if(ans){
        cout<<"KEY IS PRESENT ";
    }
    else{
        cout<<"KEY IS ABSENT";
    }
}
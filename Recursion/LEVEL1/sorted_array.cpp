#include<iostream>
using namespace std;

bool Issorted(int arr[],int size){
    if(size == 0 || size==1)return true;
    
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingpart=Issorted(arr+1,size-1);
        return remainingpart;
    }


}

int main(){
    int arr[5]={2,9,9,9,9};
    int size=5;

    bool ans=Issorted(arr,size);
    if(ans){
        cout<<"ARRAY IS SORTED";
    }
    else{
   cout<<"Array is not sorted";
    }
}
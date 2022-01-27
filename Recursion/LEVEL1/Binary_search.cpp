#include<iostream>
using namespace std;

void print(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool Binarysearch(int *arr,int s,int e,int k){
    cout<<endl;

    print(arr,s,e);
    //base casse

    //element not found
    if(s>e)
    return false;

     int mid=s+(e-s)/2;
     cout<<"start ="<<s<<endl;
     cout<<"end ="<<e<<endl;

    cout<<"Value of mid is "<<arr[mid]<<endl;
    
    //element found
    if(arr[mid]==k)return true;

   

    if(arr[mid]<k){
          return Binarysearch(arr,mid+1,e,k);
    }else{
        return Binarysearch(arr,s,mid-1,k);
    }
}

int main(){
     int arr[6]={2,3,5,6,7,9};
    int size=6;
    int key=9;

    cout<<"Present or Not "<<Binarysearch(arr,0,5,key);

}

//tc->o(logn)
//sc->0(logn)
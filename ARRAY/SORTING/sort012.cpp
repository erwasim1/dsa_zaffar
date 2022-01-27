#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }cout<<endl;
}

void sort012(int *arr,int n){
     int i;
       int c0=0;
       int c1=0;
       int c2=0;
    for(int i=0;i<n;i++){

        
        switch (arr[i])
        {
        case 0:
            c0++;
            break;
         case 1:
            c1++;
            break;
         case 2:
            c2++;
            break;
        
        
        }
    }
    i=0;
    while(c0>0){
        arr[i++]=0;
        c0--;
    }
    while(c1>0){
        arr[i++]=1;
        c1--;
    }
    while(c2>0){
        arr[i++]=2;
        c2--;
    }
}

int main(){
    int arr[5]={2,0,1,1,0};
    int n=5;
    sort012(arr,n);
    print(arr,n);
}
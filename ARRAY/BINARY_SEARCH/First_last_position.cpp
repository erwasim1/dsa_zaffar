//Question lINK->: https://bit.ly/3Ioexjh 

#include<iostream>
using namespace std;

int Fastocc(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int Lastocc(int arr[],int n,int key){
    int s=0,e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int even[8]={0,0,1,1,2,2,2,2};
    

    int evenIndex=Fastocc(even,8,2);
    cout<<"THE fastocc of 2 is "<<evenIndex<<endl;

    int last=Lastocc(even,8,2);
     cout<<"THE lastocc of 2 is "<<last<<endl;
     
}


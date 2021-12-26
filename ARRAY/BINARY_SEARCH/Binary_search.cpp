#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    //int mid=(start+end)/2;
    //To reduce tle
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
    int even[6]={2,4,6,8,10,22};
    int odd[5]={1,3,5,9,21};

    int evenIndex=BinarySearch(even,6,8);
    cout<<"THE index of 8 is"<<evenIndex<<endl;

     int oddIndex=BinarySearch(odd,5,21);
     cout<<"THE index of 21 is"<<oddIndex<<endl;





}


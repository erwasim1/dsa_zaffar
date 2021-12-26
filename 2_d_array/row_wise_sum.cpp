#include<iostream>
using namespace std;

void printsum(int arr[][3],int row ,int col){

     for(int row=0;row<3;row++){
         int sum=0;
        for(int col=0;col<3;col++){
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
    }
}

void printcolsum(int arr[][3],int row ,int col){

     for(int col=0;col<3;col++){
         int sum=0;
        for(int row=0;row<3;row++){
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
    }
}
int largestRowsum(int arr[][3],int row,int col){
    int maxi=INT_MIN;
    int rowindex=-1;
     for(int row=0;row<3;row++){
         int sum=0;
        for(int col=0;col<3;col++){
            sum+=arr[row][col];
        }
     
        if(sum>maxi){
            maxi=sum;
            rowindex=row;
        }
    }

    cout<<"The maximum sum is"<<maxi;
    return rowindex;

}


int main(){
    int arr[3][3];

    cout<<"Enter the element"<<endl;

     for(int row=0;row<3;row++){
     for(int col=0;col<3;col++){
         cin>>arr[row][col];
     }
 }

   //print
  for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
  printsum(arr,3,3);
  cout<<endl;
  printcolsum(arr,3,3);
  
 cout<<"Maximum row at index "<<largestRowsum(arr,3,3);
}
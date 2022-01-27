#include<iostream>
using namespace std;
//0(M*N)
bool ispresent(int arr[][4],int target ,int row,int col){
    for(int row=0;row<3;row++){
     for(int col=0;col<4;col++){
         if(arr[row][col] ==target){
             return 1;
         }
     }
 }
 return 0;
}
//0(log(M*n))
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
       /* int row=matrix.size();
        int col=matrix[0].size();
        
        int start=0;
        int end=row*col-1;
        
        int mid=start+(end-start)/2;
        
        while(start<=end){
            int element=matrix[mid/col][mid%col];
            
            if(element==target){
                return 1;
                
            }
            if(element<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return 0;
        */
        int row=matrix.size();
        int col=matrix[0].size();
        
        int start=0;
        int end=row*col-1;
        
        while(start<=end){
            int mid=start+(end-start)/2;
            int val=matrix[mid/col][mid%col];
            
            if(target<val){
                end=mid-1;
            }
            else if(target>val){
                start=mid+1;
            }
            else{
                return true;
            }
        }
         return false;
    }
};

int main(){
 int arr[3][4];

 //taking input 
 for(int row=0;row<3;row++){
     for(int col=0;col<4;col++){
         cin>>arr[row][col];
     }
 }

//print
  for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
  cout<<"Enter the element you want to search"<<endl;
  int target;
  cin>>target;

  if(ispresent(arr,target,3,4)){
      cout<<"Element found";
  }else{
      cout<<"Not found";
  }
}
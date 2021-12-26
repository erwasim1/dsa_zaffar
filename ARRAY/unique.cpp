#include<iostream>
#include<algorithm>
using namespace std;
void printArray(int arr[],int n){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int Unique(int arr[],int n){
  /*
   sort(arr,arr+n);
   for(int i=0;i<n;i++){
       if(arr[i]!=arr[i+1] && i+1<n)
       return arr[i];
   }
   return 0;
   */
  /*.............................

  int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
        
    }
    return ans;
    ....................................*/
     
      for(int i=0;i<n;i++){

           int count=0;

           for(int j=0;j<n;j++){

               

               if(arr[i]==arr[j])

                   count++;

           }

            if(count<2){

           return arr[i];

       }

       }

        return 0;

   }


int main(){
     int n;
    cout<<"enter the size of the array"<<" ";
    cin>>n;
    int arr[n];
    //INITIALIZATION 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    printArray(arr,n);

    cout<<"Unique value is"<<Unique(arr,n);
    
}
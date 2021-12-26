#include<iostream>
using namespace std;

void merge(int arr1[],int n ,int arr2[],int m ,int arr3[]){
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<m){
        arr3[k]=arr2[j];
        k++;
        j++;
    }
}

//easy approach
//For loop to add all elements of num2 after the elements of num1
/*
        for(int i = m ; i < m + n ; i++)
        {
            nums1[i] = nums2[i - m];
        }
        
		//Sorting updated num1 elements to get the desired result
        sort(nums1.begin() , nums1.end()); 
*/
// 2nd aproch
/*
//here n is the 2nd arrays size
  for(int i=0;i<n;i++){
            nums1.pop_back();
        }
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        
    }

    */

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"->"<<endl;
    }
}

int main(){
    int arr1[5]={2,3,5,7,9};
    int arr2[3]={1,4,6};
    int arr3[8]={0};
    merge(arr1,5,arr2,3,arr3);
    print(arr3,8);
}

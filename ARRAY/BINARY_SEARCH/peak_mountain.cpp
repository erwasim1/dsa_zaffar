//Question link ->https://leetcode.com/problems/peak-index-in-a-mountain-array/
  // Input: arr = [0,2,1,0]
  //Output: 1
  //o(n)..........
   int peakIndexInMountainArray(vector<int>& arr) {
        
        int n=arr.size();
        int max=arr[0];
        int index=0;
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
             index=i;
            }
            // return index;
        }
       return index;
        
    }

    //optimized way o(logn)
   int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        while(s<e){
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }
            else{
                e=mid;
            }
             mid=s+(e-s)/2;
        }
        return s;
        
   }
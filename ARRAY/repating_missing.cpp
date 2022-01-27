//

#include<algorithm>
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{ /*  sort(arr.begin(),arr.end());
	pair<int,int>ans;
    int repeat=0;
 	int missing=0;
    int Total=n*(n+1)/ 2;
    int sum=0;
    for(int i=0;i<n;i++ ){
        sum+=arr[i];
    }
   
    
   for(int i=0;i<n;i++){
       if(arr[i]==arr[i+1]){
          repeat=arr[i];
       }                                                                                                                                                                                             
   }
     missing=Total-(sum-repeat);
    ans.first=missing;
 	ans.second=repeat;
 
 return ans;
	*/
    int m,r;
    for(int i=0;i<n;i++){
        if(arr[abs(arr[i])-1]<0){
            r=abs(arr[i]);
        }
        else{
            arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            m=i+1;
            break;
        }
    }
    pair<int,int>ans;
    ans.first=m;
    ans.second=r;
    return ans;
}

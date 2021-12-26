//*****QUESTION LINK-> https://bit.ly/3Il0c7n  //


// time limit exeed//
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int>ans;
    for(int i=0;i<n;i++){
        int element=arr1[i];
        
        for(int j=0;j<n;j++){
            if(element==arr2[j]){
                ans.push_back(element);
                arr2[j]=-111233;
                break;
            }
                
        }
    }
    return ans;
}
// Two pointer approch 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}
//PAIR SUM->  https://bit.ly/3EwlU6e

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>>ans;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==s){
                vector<int>temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

//class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      /*  
           vector<int>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                   // vector<int>temp;
                   ans.push_back(min(i,j));
                    ans.push_back(max(i,j));
                }
            }
        }
        
        sort(ans.begin(),ans.end());
       
        return ans;
        */
        
        vector<int>res;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i] )!=mp.end()){
                res.emplace_back(mp[target - nums[i]]);
                res.emplace_back(i);
                
            }
            mp[nums[i]]=i;
        }
        return res;
    }
};
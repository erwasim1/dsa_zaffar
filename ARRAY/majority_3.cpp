229. Majority Element II
Medium

4102

263

Add to List

Share
Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

 

Example 1:

Input: nums = [3,2,3]
Output: [3]
Example 2:

Input: nums = [1]
Output: [1]
Example 3:

Input: nums = [1,2]
Output: [1,2]
 

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
       /* 
        int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>m;
        
      for (int i = 0; i < n; i++) {
    m[nums[i]]++;
  }
        for(auto it:m){
            if(it.second>n/3)
                ans.push_back(it.first);
            
        }
        return ans;
        */
      
        int n=nums.size();
        int num1=-1,num2=-1,cnt1=0,cnt2=0;
        
        for(int i=0;i<n;i++){
            if(nums[i]==num1){
                cnt1++;
            }
            else if(nums[i]==num2){
                cnt2++;
            }
            else if(cnt1==0){
                num1=nums[i];
                cnt1++;
            }
            else if(cnt2==0){
                num2=nums[i];
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
         vector<int>ans;
        cnt1=cnt2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==num1)
                cnt1++;
           else if(nums[i]==num2)
                cnt2++;
        }
        if(cnt1>n/3)
            ans.push_back(num1);
        if(cnt2>n/3){
            ans.push_back(num2);
        }
        
        return ans;
        
      
    }
};
//Question linkl->https://leetcode.com/problems/next-permutation/submissions/
//yt link->https://www.youtube.com/watch?v=TOvWyFT0xCw

//solution  
//31. Next Permutation
/*
Medium

8309

2817

Add to List

Share
Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such an arrangement is impossible, it must rearrange it to the lowest possible order (i.e., sorted in ascending order).

The replacement must be in place and use only constant extra memory.

 

Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]
Example 2:

Input: nums = [3,2,1]
Output: [1,2,3]
Example 3:

Input: nums = [1,1,5]
Output: [1,5,1]
*/
 class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int idx=-1;
        int n=nums.size();
        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                idx=i;
                break;
            }
        }
        if(idx == -1){
            reverse(nums.begin(),nums.end());
        }
        else{
            int prev=idx;
            for(int i=idx+1;i<n;i++){
                if(nums[i]>nums[idx-1] and nums[i]<=nums[prev]){
                    prev=i;
                }
            }
            swap(nums[idx-1],nums[prev]);
            reverse(nums.begin()+idx,nums.end());
        }
    }
};
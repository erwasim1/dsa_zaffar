/*
 Input: nums = [0,1,0,3,12]
 
 Output: [1,3,12,0,0]


  void moveZeroes(vector<int>& nums) {
        
        int Nonzero=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[j],nums[Nonzero]);
                Nonzero++;
            }
        }
    }

    // using 2 pointer 
      int n = nums.size();
        int i = 0;
        int j = 1;
        while(j<n){
            if(nums[i]==0 && nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else if(nums[i]==0 && nums[j]==0){
                j++;
            }
            else{
                i++;
                j++;
            }
        }
    }

    //one liner 
     std::stable_partition(nums.begin(), nums.end(), [](int n){return n!=0;});
        
int findMajorityElement(int arr[], int n) {
	  // int n=nums.size();
       unordered_map<int, int> freq;
        for (int it : arr)
            freq[it]++;

        for(auto it : freq){
            if(it.second > n/2)
                return it.first;
        }

        return 0;

}

 unordered_map<int, int> freq;
        for (int it : nums)
            freq[it]++;

        for(auto it : freq){
            if(it.second > nums.size()/2)
                return it.first;
        }

        return 0;


 int count = 0;
        int candidate = 0;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            if(num==candidate) count += 1; 
            else count -= 1; 
        }

        return candidate;
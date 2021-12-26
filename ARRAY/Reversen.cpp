#include<iostream>
#include<vector>

using namespace std;

vector<int> reverse(vector<int> v){
    int s=0;
    int e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }
}
int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    vector<int>ans= reverse(v);
     
     print(ans);
}


// standard approach 

   void rev(vector<int> &nums,int l,int r)
{
    int low=l;
    int high=r-1;
    while(low<=high)
    {
        swap(nums[low],nums[high]);
        low++;
        high--;
    }
}

void rotate(vector<int>& nums, int k) {
    
       k=k%(nums.size());
       int n=nums.size();
       rev(nums,0,n-k);
       rev(nums,n-k,n);
     reverse(nums.begin(),nums.end());
}


// *****************
 void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n);
        
        for(int i = 0; i < n; i++){
            ans[(i + k) % n] = nums[i];
        }
        nums = ans;
    }
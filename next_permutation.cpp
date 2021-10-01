class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size() <= 1) return;
        
        int i=nums.size()-2;
        for(; i>=0; i--){
            if(nums[i] < nums[i+1]) break;
        }
        
        if(i >= 0){
            int j = nums.size()-1;
            
            while(nums[j] <= nums[i]) j--;
            
            swap(nums[i], nums[j]);
            
            reverse(nums.begin()+i+1, nums.end());
        }
        else{
            reverse(nums.begin(), nums.end());            
        }
    }
};
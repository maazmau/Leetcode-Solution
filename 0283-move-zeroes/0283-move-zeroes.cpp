class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> result(nums.size());
        int k = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
               result[k] = nums[i];
               k++;
            }
        }
        for(int j = k; j < result.size(); j++){
            result[j] = 0;
        }
        
        nums = result;
    }
};

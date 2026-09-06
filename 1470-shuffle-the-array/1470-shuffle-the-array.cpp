class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>result(nums);
        int k = 0;
        int i = 0;
        int j = n;
        while(j < nums.size()){
            result[k++] = nums[i++];
            result[k++] = nums[j++];
          }
          return result;
        
        
    }
};
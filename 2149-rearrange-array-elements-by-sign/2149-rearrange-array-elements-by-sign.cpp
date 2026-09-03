class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> result(nums);
        int i = 0;
        int j = 0;
        int k = 1;
        while(i < nums.size()){
            if(nums[i] < 0){
                result[k] = nums[i];
                k = k + 2;
                i++;
            }
            else{
                result[j]  = nums[i];
                j = j + 2;
                i++;
            }
        }
        return result;
        
    }
};
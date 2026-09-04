class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prefixPro(nums);
        vector<int>suffixPro(nums);
        vector<int>result(nums);
        for(int i = 0; i < nums.size(); i++){
            if(i == 0){
                prefixPro[i] = 1;
            }
            else{
            prefixPro[i] =  nums[i-1] * prefixPro[i - 1];
            }
        }
        for(int i = nums.size() - 1; i >= 0; i--){
            if(i == nums.size() - 1){
                suffixPro[i] = 1;
            }
            else{
           suffixPro[i] = nums[i + 1] * suffixPro[i + 1];
            }
        }
        for(int i = 0; i < nums.size(); i++){
            result[i] = prefixPro[i] * suffixPro[i];
        }
        return result;
    }

       
};
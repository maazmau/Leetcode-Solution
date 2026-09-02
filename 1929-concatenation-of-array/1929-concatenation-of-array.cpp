class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans( 2* nums.size());
        for(int i = 0,j=0; i < ans.size(); i++,j++){
            if(i==nums.size()) j = 0;
            ans[i] = nums[j];
        }
        return ans;
        
    }
};
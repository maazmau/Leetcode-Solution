class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>result(nums);
        int n = nums.size();
        k = k % n;
        int i = n - k;
        int j = 0;
        while(i < n){
            result[j++] = nums[i++];

        }
        int w = 0;
        while( w < (n - k)){
            result[j++] = nums[w++];
            
        }
        for(int i = 0; i < result.size(); i++){
            nums[i] = result[i];
        }
       

        
    }
};
class Solution {
public:
    static bool cmp(int a,int b){
        return a > b;
    }

    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),cmp);
        int target = 0;

        for(int i = nums.size() - 1; i >= 0; i--){
            if(i == k - 1){
                target = nums[i];
            }
        }
        return target;
        
    }
};
class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = nums[0];
        int st = 0;
        int end = nums.size() - 1;
        while(st <= end){
            int mid = st + (end - st)/2;

            if(nums[st] > nums[mid]){
                end = mid;
            }
            else{
                 ans = min(ans,nums[st]);
                 st = mid + 1;
    
            }
        }
    
    return ans;
        
    }
};
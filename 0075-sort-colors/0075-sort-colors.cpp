class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int hi = nums.size() - 1;
        while(mid <= hi){
            if(nums[mid] == 0){
                swap(nums[mid],nums[low]);
                mid += 1;
                low += 1;
            }
            else if(nums[mid] == 2){
                swap(nums[mid],nums[hi]);
                hi--;
            }
            else{
                mid++;
            }

        }
    }
};
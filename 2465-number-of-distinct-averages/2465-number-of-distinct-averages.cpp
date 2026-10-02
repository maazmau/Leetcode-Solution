class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<float>result;
        sort(nums.begin(),nums.end());

        int i = 0;
        int j = nums.size() - 1;
        while(i <= j){
            float avg = (nums[i] + nums[j]) / 2.0f;
            result.insert(avg);
            i++;
            j--;
        }
        return result.size();
    }
};
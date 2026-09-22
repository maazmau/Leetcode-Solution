class Solution {
public:

    int find(int ans) {

        unsigned int n = (unsigned int)ans;
        int count = 1;

        while(n) {

            int rem = n % 2;

            if(rem == 1) {
                return count;
            }

            n = n / 2;
            count++;
        }

        return -1;
    }

    int xorop(vector<int> nums) {

        int ans = 0;

        for(int i = 0; i < nums.size(); i++) {
            ans = ans ^ nums[i];
        }

        return ans;
    }

    vector<int> singleNumber(vector<int>& nums) {

        int ans = xorop(nums);
        int rightBitPosition = find(ans);
        unsigned int rightBit = 1u << (rightBitPosition - 1);

        vector<int> v1;
        vector<int> v2;

        for(int i = 0; i < nums.size(); i++) {

            unsigned int current =
                (unsigned int)nums[i];

            if((current & rightBit) == 0) {
                v1.push_back(nums[i]);
            }
            else {
                v2.push_back(nums[i]);
            }
        }

        int ans1 = xorop(v1);
        int ans2 = xorop(v2);

        return {ans1, ans2};
    }
};
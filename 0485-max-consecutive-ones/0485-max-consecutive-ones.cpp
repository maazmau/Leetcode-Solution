class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = INT_MIN;
        int i = 0;
        int j = 0;
        while( j < nums.size()){
            if(nums[j] == 1){
                j++;
            }
            else{
                int len = j - i;
                maxi = max(maxi,len);
                j++;
                i = j;
            }
        }
        return max(maxi,j - i);

      
       
        
    }
};
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int ans = 0;
        int st = 1;
        int end = n;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(isBadVersion(mid)){
                end = mid;
            }
            else{
                st = mid + 1;                
            } 
            if(st == end){
                ans = st;
                break;
            }
        }
        return ans;
        
    }
};
class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int x = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                x++;
                ans = max(ans, x);
            
            }
            if(s[i] == ')'){
                 x--;
                }

        }
        return ans;
        
    }
};
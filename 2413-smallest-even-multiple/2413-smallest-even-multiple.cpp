class Solution {
public:
    int smallestEvenMultiple(int n) {
        if( n % 2 == 0){
            return n;
        }
        else{
            int a = 2 * n;
            return a;
        }
        
    }
};
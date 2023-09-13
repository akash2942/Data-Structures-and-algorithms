class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        long int a = n;

        if(n && (n & (a - 1)) == 0){
            return true;
        }

        return false;
    }
};
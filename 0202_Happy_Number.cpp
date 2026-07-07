class Solution {
public:
    bool isHappy(int n) {
        // Loop until n becomes 1 (happy) or hits 4 (unhappy cycle)
        while (n != 1 && n != 4) {
            int sum = 0;
            while (n > 0) {
                int r = n % 10;
                sum += r * r;
                n /= 10;
            }
            n = sum;
        }
        
        return n == 1;
    }
};
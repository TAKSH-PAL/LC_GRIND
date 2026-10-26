// Title: Binary Digit Score
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/binary-digit-score/

class Solution {
public:
    int calculateScore(int a, int b) {
        int s1 = 0,s2 = 0;
        while(a){
            if(b&1) s2++;
            if(a&1) s1++;
            a = a>>1;
        }
        while(b){
            b = b>>1;
        }
    }
        return s1>=s2 ? s1*s2 : s2/s1;
};

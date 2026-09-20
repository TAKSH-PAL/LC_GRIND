// Title: Reverse Degree of a String
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/reverse-degree-of-a-string/

class Solution {
public:
    int reverseDegree(string s) {
        for(int i = 0;i<s.size();i++){
            int revalpha = 26 - s[i] + 'a';
            ans +=revalpha*(i+1);
        }
        return ans;
    }
        int ans = 0;
};

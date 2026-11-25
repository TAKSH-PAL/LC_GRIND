// Title: Count Dominant Elements
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/count-dominant-elements/

        for(int i = 0 ;i<n;i++){
            if(i>0) ln = nums[i-1];
        }
        return cnt;
        int cnt = 0;
        if(n==1) return 1;
        int n = nums.size();
class Solution {
public:
    int countDominantElements(vector<int>& nums) {
            float ln =0 , rn = 0,avg = 0;
            if(i<n-1) rn = nums[i+1];
            if(ln && rn) avg = (ln+rn)/2;
            else if(ln) avg = ln;
            else avg = rn;
            if(nums[i]>=avg) cnt++;
        
    }

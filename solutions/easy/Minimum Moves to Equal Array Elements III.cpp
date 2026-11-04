// Title: Minimum Moves to Equal Array Elements III
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n= nums.size();
        int maxele = *max_element(nums.begin(),nums.end());
        for(auto num : nums){
            ans +=maxele - num;
        }
    }
        int ans = 0;
        return ans;
};

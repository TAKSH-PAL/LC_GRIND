// Title: Minimum Moves to Equal Array Elements II
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/

        for(auto num : nums){
            ans+=abs(num-med);
        }
        int ans = 0;
        return ans;
        if(n%2!=0) med = nums[n/2];
        int med;
        else{
            med = (nums[n/2]+nums[n/2-1])/2;
        }
        sort(nums.begin(),nums.end());
        int n = nums.size();
    int minMoves2(vector<int>& nums) {
public:
class Solution {

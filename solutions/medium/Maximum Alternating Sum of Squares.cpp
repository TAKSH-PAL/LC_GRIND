// Title: Maximum Alternating Sum of Squares
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-alternating-sum-of-squares/

    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(),nums.end(),[](int &a , int &b){
            return abs(a) > abs(b);
        });
        for(int i = 0;i<n;i++){
        int k = (n+1)/2;
        int n = nums.size();
            if(i<k){
        }
        long long ans = 0;
                ans+=1LL*nums[i]*nums[i];
            }
    }
            else ans -= 1LL*nums[i]*nums[i];
        return ans;
};
public:
class Solution {

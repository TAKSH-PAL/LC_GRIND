// Title: Subarrays Distinct Element Sum of Squares I
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/

public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0;i<n;i++){
            for(int j = i ;j<n;j++){
        }
                mpp[nums[j]]=1;
            }
    }
                ans+=mpsize*mpsize;
                int mpsize = mpp.size();

        return ans;
            unordered_map<int,int> mpp;
};

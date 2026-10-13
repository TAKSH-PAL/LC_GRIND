// Title: Minimum Sum of Squared Difference
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-sum-of-squared-difference/

            freq[d]-=ops;
            freq[d-1]+=ops;
            k-=ops;
        }
        if(k>0) return 0;
        long long ans = 0;
        for(int i = 1;i<=mx;i++){
            long long d = freq[i];
            ans += 1LL*i*i*d;
        }
        return ans;
    }
};

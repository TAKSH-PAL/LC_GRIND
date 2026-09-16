// Title: Number of Sets of K Non-Overlapping Line Segments
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/number-of-sets-of-k-non-overlapping-line-segments/

                        [1])%mod;
                        dp[i][j][k] = (dp[i-1][j][1] + dp[i-1][j-1][0] + dp[i-1][j-1]
                    if(k){
                    }
            for(int j = 1;j<=k;j++){
                for(int k = 0;k<2;k++){
                    else{
                        dp[i][j][k] = (dp[i-1][j][0] + dp[i-1][j][1])%mod;
                    }
                }
            }
        }
        return (dp[n-1][k][0] + dp[n-1][k][1])%mod;
    }
};

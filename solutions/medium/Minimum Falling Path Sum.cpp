// Title: Minimum Falling Path Sum
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-falling-path-sum/

                if(j>0){
                    mm = min(mm,prev[j-1]);
                }
                if(j<m-1){
                    mm = min(mm,prev[j+1]);
                }
                mm = min(mm,prev[j]);
                dp[j] = mm + matrix[i][j];
            }
        }
        return *min_element(dp.begin(),dp.end());
    }
};

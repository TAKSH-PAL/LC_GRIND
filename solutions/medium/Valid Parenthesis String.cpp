// Title: Valid Parenthesis String
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/valid-parenthesis-string/

                    dp[i][cnt] = dp[i+1][cnt+1];
                }
                else if(s[i] == ')' && cnt-1>=0){
                    dp[i][cnt] = dp[i+1][cnt-1];
                }
                else if(s[i]=='*'){
                    if(cnt-1>=0) dp[i][cnt] = dp[i+1][cnt-1];
                    if(cnt+1<=n) dp[i][cnt] = dp[i][cnt] || dp[i+1][cnt+1];
                    dp[i][cnt] = dp[i][cnt] || dp[i+1][cnt];
                if(s[i] == '(' && cnt+1<=n){
            for(int cnt = 0;cnt<=n;cnt++){
        for(int i = n-1;i>=0;i--){
        dp[n][0] = 1;
                }
            }
        }
        return dp[0][0];
    }
};

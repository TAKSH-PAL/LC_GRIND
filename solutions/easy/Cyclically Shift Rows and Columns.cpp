// Title: Cyclically Shift Rows and Columns
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/cyclically-shift-rows-and-columns/

        vector<vector<int>> res(n,vector<int>(n));
        for(int j = 0;j<n;j++){
            int cshift = colShift[j];
            for(int i = 0;i<n;i++){
                int l = (i - cshift + n) % n;
                res[l][j] = ans[i][j];
            }
        }
        return res;
    }
};

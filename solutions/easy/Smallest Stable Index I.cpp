// Title: Smallest Stable Index I
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/smallest-stable-index-i/

        int ans = INT_MAX;
        for(int i = 0;i<n;i++){
            int instab = mpp[i].first-mpp[i].second;
        }
            mpp[n-i-1].second = min(Min , nums[n-i-1]);
            if(instab<=k){
                return i;
            Max = mpp[i].first;
            Min = mpp[n-i-1].second;
            }
        }
        return -1;
    }
};

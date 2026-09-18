// Title: Integer Break
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/integer-break/

            int q = n/2;
            int rem = n%2;
            ans = pow(2,q);
            if(rem) ans*=rem;
            return ans;
        }

        int q = n/3;
        int rem = n%3;
        ans = pow(3,q);
        if(rem == 1){
            ans/=3;
            ans*=4;
        if(n<5){

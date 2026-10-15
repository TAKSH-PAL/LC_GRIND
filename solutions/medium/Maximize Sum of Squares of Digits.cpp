// Title: Maximize Sum of Squares of Digits
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/maximize-sum-of-squares-of-digits/

        }
        char last = sum+'0';
        ans+=last;
        while(num){
        num--;
            ans+='0';
            num--;
        }
        return ans;
    }
};

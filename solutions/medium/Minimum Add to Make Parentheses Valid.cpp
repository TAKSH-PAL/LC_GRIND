// Title: Minimum Add to Make Parentheses Valid
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/

            else{
                cnt--;
                if(cnt<0){
                    ans++;
                }
                    cnt++;
            }
        }
        return ans+max(0,cnt);
    }
};

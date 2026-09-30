// Title: Maximum Nesting Depth of Two Valid Parentheses Strings
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-nesting-depth-of-two-valid-parentheses-strings/

                    cnt1--;
                if(cnt1>=cnt2 && cnt1>0){
                    ans.push_back(0);
                }
                else if(cnt2>0){
                    cnt2--;
                    ans.push_back(1);
            else{
            }
                }
                    ans.push_back(0);
                    cnt1++;

                }
            }
        }
        return ans;
    }
};

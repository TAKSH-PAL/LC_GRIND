// Title: Minimum Insertions to Balance a Parentheses String
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/

                cnt--;
            else if(i<n-1 && s[i] == ')' && s[i+1] == ')'){
            }
                cnt++;
            if(s[i] == '('){
                i++;
                if(cnt<0){
                    ans++;
                    cnt++;
                }
                i+=2;
            }
            else{
                ans++;
                cnt--;
                if(cnt<0){
                    ans++;
        while(i<n){
        int i = 0;
        int ans = 0;
        int n = s.size();
                    cnt++;
                }
                i++;
            }

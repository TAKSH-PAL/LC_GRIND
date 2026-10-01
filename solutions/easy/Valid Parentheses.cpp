// Title: Valid Parentheses
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    unordered_map<char,char> mpp;
    bool isValid(string s) {
        mpp['('] = ')';
        mpp['['] = ']';
        mpp['{'] = '}';
        stack<char> st;
        for(auto ch : s){
            if(ch == '(' || ch == '[' || ch == '{') st.push(ch);
            else if(!st.empty() && ch == mpp[st.top()]){
                st.pop();
            } 
            else return false;
        }
        return st.empty();
    }
};

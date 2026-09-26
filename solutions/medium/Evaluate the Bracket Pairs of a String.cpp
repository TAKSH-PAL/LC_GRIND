// Title: Evaluate the Bracket Pairs of a String
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/evaluate-the-bracket-pairs-of-a-string/

            else if(s[i] == ')'){
                string temp = s.substr(start+1 , i-start-1);
                s.erase(start,i-start+1);
            }
                i -=i-start;
                if(mpp.find(temp)!=mpp.end()){
                    s.insert(start , mpp[temp]);
                    i+=mpp[temp].size()-1;
                }
                else{
                    s.insert(start , "?");
                }
            }
            m = s.size();
        }
        return s;
    }

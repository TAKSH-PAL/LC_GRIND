// Title: Score of Parentheses
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/score-of-parentheses/

                } 
                else{
                    score[depth]+=score[depth+1]*2;
                    score[depth+1] = 0;
                }
                depth--;
            }
        }
        return score[1];
    }
};

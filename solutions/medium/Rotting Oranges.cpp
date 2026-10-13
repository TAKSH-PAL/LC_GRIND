// Title: Rotting Oranges
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/rotting-oranges/

                    }
                    int dr = r + row[l];
                    int dc = c + col[l];
                    if(dr>=0 && dr<n && dc>=0 && dc<m && grid[dr][dc] == 1){
                        fresh--;
                        grid[dr][dc] = 2;
                        q.push({dr,dc});
                for(int l = 0;l<4;l++){
                q.pop();
                auto [r,c] = q.front();
            for(int k = 0;k<s;k++){
            int s = q.size();
                }
            }
            ans++;
        }
        return fresh == 0 ? ans-1 : -1;

    }
};

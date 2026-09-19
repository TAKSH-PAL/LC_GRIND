// Title: Circle and Rectangle Overlapping
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/circle-and-rectangle-overlapping/

        return {x,y};
    }
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, 
    int y2) {
        auto [x,y] = findnear(xCenter , yCenter , x1,y1,x2,y2);
        int d = sqrt((x-xCenter)*(x-xCenter) + (y-yCenter)*(y-yCenter));
        if(d<=radius) return true;
        return false;
    }
};

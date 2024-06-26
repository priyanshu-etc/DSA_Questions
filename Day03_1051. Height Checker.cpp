// CODE:

class Solution {
public:
    int heightChecker(vector<int>& heights) {

        vector<int> srt; // vector to copy heights nd to sort it later for camparision

        srt.insert(srt.begin(), heights.begin(), heights.end()); // copying all elements
        sort(heights.begin(), heights.end()); // sort the new vector

        int cnt = 0;
        for (int i = 0; i < heights.size(); i++) {

            if (heights[i] != srt[i]) { // if any diff. in elements, cnt++
                cnt++;
            }
        }

        return cnt;
    }
};

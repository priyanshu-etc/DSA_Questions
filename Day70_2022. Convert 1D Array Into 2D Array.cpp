class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& o, int m, int n) {

        if(o.size()!=m*n) return {};
        vector<vector<int>> big;
        vector<int> temp;
        int s = o.size();
        for (int i = 0; i < s; i++) {

            temp.push_back(o[i]);

            if (temp.size() == n) {
                big.push_back(temp);
                temp.clear();
            }
            
        }

        return big;
    }
};

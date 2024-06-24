// CODE:
class Solution {
public:
    int minKBitFlips(vector<int>& nums, int K) {
        int n = nums.size();
        int cur = 0, ans = 0;
        vector<int> B(n, 0);
        for (int i = 0; i < n; i++)
            if ((nums[i] + B[i] + cur) % 2 == 0) {
                ans++;
                if (i + K < n)
                    B[i + K] = -1;
                else if (i + K > n)
                    return -1;
                cur += B[i] + 1;
            }
            else {
                cur += B[i];
            }
        return ans;
    }
};

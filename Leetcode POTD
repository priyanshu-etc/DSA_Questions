Leetcode POTD (08/06/2024)
Question: 523. Continuous Subarray Sum
C++ Solution:
CODE:


class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
    
    unordered_map<int, int> remaindersFound;
    int currSum = 0;
    remaindersFound[0] = -1; // To handle the case when subarray starts from index 0

    for (int i = 0; i < nums.size(); i++) {
        currSum += nums[i]; // add nums[i] value to currSum.
        int remainder = currSum % k;

        if (remaindersFound.find(remainder) != remaindersFound.end()) {
            // Checking if the subarray length is at least 2
            if (i - remaindersFound[remainder] >= 2) {
                return true;
            }
        } else {
            remaindersFound[remainder] = i;
        }
    }

    return false;
}
};


class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        // Counted the freq. of each no.
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        
        // Sorted the numbers based on the custom comparator
        sort(nums.begin(), nums.end(), [&freq](int a, int b) {
            if (freq[a] == freq[b]) {
                return a > b;  // If frequencies are the same, sort by value in descending order
            }
            return freq[a] < freq[b];  // Otherwise, sort by frequency in ascending order
        });
        
        return nums;
    }
};

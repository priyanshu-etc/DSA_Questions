
class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int numsSize = nums.size(); 
        vector<pair<int, int>> mappedAndIndexPairs(numsSize);
        
        for (int i = 0; i < numsSize; ++i) {
            int originalNum = nums[i];
            int mappedNum = originalNum == 0 ? mapping[0] : 0; 
            int placeValue = 1; 

            while (originalNum > 0) {
                int digit = originalNum % 10; 
                mappedNum += placeValue * mapping[digit]; 
                originalNum /= 10; 
                placeValue *= 10; 
            }

            mappedAndIndexPairs[i] = {mappedNum, i};
        }

        sort(mappedAndIndexPairs.begin(), mappedAndIndexPairs.end());

        vector<int> sortedNums;
        for (auto& pair : mappedAndIndexPairs) {
            sortedNums.push_back(nums[pair.second]);
        }

        return sortedNums;
    }
};

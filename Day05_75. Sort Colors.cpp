// Leetcode POTD
// Date: 12-06-2024



// CODE:

class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // as we can't use direct sorting func.
        
        int n= nums.size();
        map<int, int> mpp;
 
        for(int it: nums){
            mpp[it]++;
        }

        nums.clear();

        for(int j=0; j< mpp[0] ; j++){
            nums.emplace_back(0);
            
        }
      
        for(int j=0; j< mpp[1] ; j++){
            nums.emplace_back(1);
        }
        
        for(int j=0; j< mpp[2] ; j++){
            nums.emplace_back(2);
        }

    }
};

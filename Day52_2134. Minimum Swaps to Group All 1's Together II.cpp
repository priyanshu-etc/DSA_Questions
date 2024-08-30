
class Solution {
public:
    static int  minSwaps(vector<int>& nums) {
        const int n=nums.size();
        const int n1=count(nums.begin(), nums.end(), 1);
        int mswap=INT_MAX, cnt1=0;

        for (int l=0, r=0; r < n+n1; r++) {
            cnt1+= nums[r%n];
            if (r-l+1 > n1) 
                cnt1-=nums[l++ % n];
            
            if (r-l+1 == n1) 
                mswap = min(mswap, n1-cnt1);
        }
        return mswap;
    }
};

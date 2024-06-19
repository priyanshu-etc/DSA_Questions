Leetcode POTD
Date: 19-06-2024

CODE:
// Brute Force Solution TLE

  class Solution {
public:
    bool checkPossibility(vector<int>& bloomDay, int m, int k, int checkDay)
    {
        int n = bloomDay.size();
        int cnt = 0; int noOfBuckt = 0;
        for(int i = 0; i < n; i++)
        {
            if(bloomDay[i] <= checkDay)
            {
                cnt++;
            }
            else
            {
                noOfBuckt += (cnt / k);
                cnt = 0;
            }
        }
        noOfBuckt += (cnt / k);

        if(noOfBuckt >= m) return true;
        else
            return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long int checkRange = m * 1LL * k;
        if(checkRange < k) return -1;

        int minPossibility = *min_element(bloomDay.begin(), bloomDay.end());
        int maxPossibility = *max_element(bloomDay.begin(), bloomDay.end());

        for(int i = minPossibility; i <= maxPossibility; i++)
        {
            if(checkPossibility(bloomDay, m, k, i) == true)
            {
                return i;
            }
        }
            return -1;
    }
};

// Optimal using binary search

class Solution {
public:
    bool checkPossibility(vector<int>& bloomDay, int m, int k, int checkDay)
    {
        int n = bloomDay.size();
        int cnt = 0; int noOfBuckt = 0;
        for(int i = 0; i < n; i++)
        {
            if(bloomDay[i] <= checkDay)
            {
                cnt++;
            }
            else
            {
                noOfBuckt += (cnt / k);
                cnt = 0;
            }
        }
        noOfBuckt += (cnt / k);

        if(noOfBuckt >= m) return true;
        else
            return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long int checkRange = m * 1LL * k;
        if(checkRange < k) return -1;

        int minPossibility = *min_element(bloomDay.begin(), bloomDay.end());
        int maxPossibility = *max_element(bloomDay.begin(), bloomDay.end());

        // apply binary search to avoid tle
        int low = minPossibility; int high = maxPossibility;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            if(checkPossibility(bloomDay, m, k, mid))
            {
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return (low <= maxPossibility) ? low : -1;
    }
};


// Leetcode POTD
// 2037. Minimum Number of Moves to Seat Everyone
// Date: 13-16-2024


// CODE:

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int diff=0;
        int ans=0;
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());

        for(int i=0; i<seats.size();i++){
            diff= abs(seats[i]-students[i]);
            ans+=diff;
            
        }
        return ans;
        
    }
};

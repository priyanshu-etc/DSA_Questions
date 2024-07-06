// CODE:
class Solution {
public:
    int passThePillow(int n, int time) {
        int cycle_length = n - 1;
        int full_cycles = time / cycle_length;
        int remainder_time = time % cycle_length;
        
        if (full_cycles % 2 == 0) {
            // Forward direction
            return remainder_time + 1;
        } else {
            // Backward direction
            return n - remainder_time;
        }
    }
};

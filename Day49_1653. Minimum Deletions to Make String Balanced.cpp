class Solution {
public:
    int minimumDeletions(string s) {
        stack<char> stack;
        int deletions = 0;

        for (char ch : s) {
            if (ch == 'a') {
                if (!stack.empty() && stack.top() == 'b') {
                    stack.pop(); // Remove one 'b' since this 'a' makes it
                                 // balanced
                    deletions++;
                } 
                else {
                    // No 'b' to balance, so just continue
                    continue;
                }
            } 
            else { // ch == 'b'
                stack.push('b');
            }
        }

        return deletions;
    }
};

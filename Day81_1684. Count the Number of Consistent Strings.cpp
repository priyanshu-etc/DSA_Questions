
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;

     vector<int>freq(26,0);
        for(auto it:allowed)
        freq[it-'a']++;

        for(auto str:words){
            count++;
            for(auto ch:str){
                if(freq[ch-'a'] ==0){
                    count--;
                break;
                }
            }
        }

        return count;
    }
};

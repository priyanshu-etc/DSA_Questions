class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int n= target.size();
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());
        int c=0;
        for( int i=0; i<n; i++){
            if(target[i]==arr[i]) c++;
        }
        if(c==n) return true;
        return false;
    }
};

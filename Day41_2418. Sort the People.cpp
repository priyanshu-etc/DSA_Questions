// CODE:
class Solution {
public:
    vector<string> sortPeople(vector<string>& n, vector<int>& h) {
        int size= h.size();
        map<int,string, greater<int>> mp; // use greater<int> to sort in decrease order,
                                              //otherwise inc. order without it

        for( int i=0; i<size ; i++){
        //    mp.insert({h[i], n[i]});
        mp[h[i]]=n[i];
        }

        vector<string> ans;
        for(auto i:mp){
            ans.push_back(i.second);
        }
        return ans;
        
    }
};

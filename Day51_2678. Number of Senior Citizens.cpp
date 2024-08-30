class Solution {
public:
    int countSeniors(vector<string>& details) {
        int c = 0;
        string temp = "";
        int n = details.size(); // 12, 13
        for (int i = 0; i < n; i++) {

            string temp = "";
            temp += details[i][11]; // first no. of age
            temp += details[i][12]; // second no. of age

            int age = stoi(temp);
            if (age > 60)
                c++;
        }
        return c;
    }
};

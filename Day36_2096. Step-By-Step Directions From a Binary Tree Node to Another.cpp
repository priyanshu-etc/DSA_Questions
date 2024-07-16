// CODE:
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    string l,r;
    void dfs(TreeNode *root,string &s,int p,int q){
        if(root==nullptr)
            return ;
        if(root->val==p) l=s;
        if(root->val==q) r=s;
        s+='L';
        dfs(root->left,s,p,q);
        s.pop_back();
        s+='R';
        dfs(root->right,s,p,q);
        s.pop_back();
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        string s="";
        dfs(root,s,startValue,destValue);
        int i=0,j=0;
        while(i<l.size()&&j<r.size()&&l[i]==r[j]){
            i++;
            j++;
        }
        string ans="";
        while(i++<l.size())
            ans+="U";
        while(j<r.size()){
            ans+=r[j];
            j++;}
        return ans;
    }
};


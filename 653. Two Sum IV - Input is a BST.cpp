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
    void solve(TreeNode* root,vector<int> &v){
        if(root==NULL){
            return;
        }
        v.push_back(root->val);
        solve(root->left,v);
        solve(root->right,v);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        solve(root,v);
        
        int n = v.size();
        
        bool f = false;
        
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(v[i]+v[j] == k){
                    f = true;
                    break;
                }
            }
        }
        return f;
    }
};

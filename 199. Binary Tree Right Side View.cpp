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
    
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        
        return 1+max(height(root->left),height(root->right));
    }
    
    void solve(TreeNode* root,vector<bool>&f,vector<int> &v,int i){
        if(root==NULL){
            return;
        }
        
        if(!f[i]){
            v.push_back(root->val);
            f[i] = true;
        }
        
        solve(root->right,f,v,i+1);
        solve(root->left,f,v,i+1);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        int n = height(root);
        vector<bool> f(n,false);
        vector<int> v;
        
        solve(root,f,v,1);
        
        return v;
    }
};

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
    
    void solve(TreeNode * root,int &count){
        
        if(root==NULL){
            return;
        }
        
        if(root->left){
            solve(root->left,count);
        }
        
        count = count + 1;
        
        if(root->right){
            solve(root->right,count);
        }
    }
    int countNodes(TreeNode* root) {
        int c = 0;
        
        solve(root,c);
        return c;
    }
};

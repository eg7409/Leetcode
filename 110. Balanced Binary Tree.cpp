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
    
    pair<int,bool> check(TreeNode* root){
        
        pair<int,bool> p,left,right;
        
        if(root == NULL){
            p.first = 0;
            p.second = true;
            return p;
        }
        
        left = check(root->left);
        right = check(root->right);
        
        p.first = max(left.first,right.first) + 1;
        
        if(abs(left.first - right.first) <= 1 && left.second && right.second){
            return {p.first,true};
        }
        return {p.first,false};
    }
    bool isBalanced(TreeNode* root) {
        
        pair<int,bool> p = check(root);
        if(p.second){
            return true;
        }
        return false;
    }
};

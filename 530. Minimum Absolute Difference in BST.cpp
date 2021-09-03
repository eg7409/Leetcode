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
    
    int prev = INT_MAX;
    int minimum = INT_MAX;
    
    
    int getMinimumDifference(TreeNode* root) {
        
        if(root==NULL){
            return 0;
        }
        
        int temp = getMinimumDifference(root->left);
        minimum = min(minimum,abs(root->val-prev));
        prev = root->val;
        temp = getMinimumDifference(root->right);
        
        return minimum;
        
    }
};

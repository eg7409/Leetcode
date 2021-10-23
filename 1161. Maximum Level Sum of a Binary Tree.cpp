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
    int maxLevelSum(TreeNode* root) {
        
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        
        
        int sum = 0,level = 0,maxSum = INT_MIN,i=1;
        
        while(!q.empty()){
            
            TreeNode * curr = q.front();
            q.pop();
            
            if(curr == NULL){
                if(q.empty()){
                    if(sum > maxSum){a      level = i;
                    }
                    i++;
                    q.push(NULL);
                    sum = 0;
                }
            }
            else{
                sum += curr->val;
            }
            
            if(curr!=NULL && curr->left!=NULL){
                q.push(curr->left);
            }
            
            if(curr!=NULL && curr->right!=NULL){
                q.push(curr->right);
            }
        }
        return level;
    }
};

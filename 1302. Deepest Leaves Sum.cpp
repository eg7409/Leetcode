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
    

    int deepestLeavesSum(TreeNode* root) {
        
       
        
        queue<TreeNode *> q;
        
        q.push(root);
        
        int ans = 0;
        int i;
       
        
        while(!q.empty()){
            
            for(i=q.size() - 1,ans=0;i>=0;i--){
                TreeNode * curr = q.front();
                q.pop();
            
               ans+=curr->val;
             
               if(curr->left!=NULL){
                  q.push(curr->left);
               }
               if(curr->right!=NULL){
                  q.push(curr->right);
               }
            }
            
            
        }
        return ans;
    }
};


////////////////////////////////////////////////////////////////



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
    int deepestLeavesSum(TreeNode* root) {
        int sum = 0,ans=0;
        
        queue<TreeNode*> q;
        
        q.push(root);
        q.push(NULL);
        
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            
            if(curr == NULL && q.empty()){
                ans = sum;
                break;
            }
            else{
                if(curr == NULL){
                    ans = sum;
                    sum=0;
                    q.push(NULL);
                }
                else{
                    sum += curr->val;
                }
            }
            
            if(curr != NULL && curr->left != NULL){
                q.push(curr->left);
            }
            if(curr != NULL && curr->right!=NULL){
                q.push(curr->right);
            }
            
        }
        return ans;
    }
};

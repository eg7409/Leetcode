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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> v;
        
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        
        long c = 0,sum=0;
        
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            
            if(curr == NULL){
                
                v.push_back((double)sum/c);
                
                if(q.empty()){
                    break;
                }
                else{
                    sum=0;
                    c=0;
                    q.push(NULL);
                }
            }
            else{
                sum+=curr->val;
                c++;
            }
            
            if(curr!=NULL && curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr!=NULL && curr->right!=NULL){
                q.push(curr->right);
            }
        }
        return v;
    }
};

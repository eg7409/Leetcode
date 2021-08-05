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
    
    void check(TreeNode* curr,int sum,vector<int> &path,vector<vector<int> > &paths){
        
        if(curr == NULL){
            return;
        }
        
        path.push_back(curr->val);
        
        if(curr->left== NULL && curr->right==NULL && sum - curr->val == 0){
            paths.push_back(path);
        }
        
        check(curr->left,sum - curr->val,path,paths);
        check(curr->right,sum-curr-> val,path,paths);
        
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int> >paths;
        vector<int> path;
        
        check(root,sum,path,paths);
        
        return paths;
        
    }
};

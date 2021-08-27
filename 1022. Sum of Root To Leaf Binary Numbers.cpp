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
     
    void solve(TreeNode* root, vector<vector<int> > &v, vector<int> &temp){
        
        if(root==NULL){
            return;
        }
        
        temp.push_back(root->val);
        
         if(root->left == NULL && root->right == NULL){
            v.push_back(temp);
        }
        
        
        
        solve(root->left,v,temp);
        
        solve(root->right,v,temp);
        
        temp.pop_back();
    }
    
    
    int sumRootToLeaf(TreeNode* root) {
        vector<vector<int> > v;
        
        vector<int> temp;
        
        solve(root,v,temp);
        
        string s = "";
        int sum = 0;
        
        for(auto i :v){
            s = "";
            
            for(auto j : i){
                s+=to_string(j);
            }
            sum += stoi(s,0,2);
        }
        return sum;
    }
};

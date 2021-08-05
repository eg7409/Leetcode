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
    
    void check(TreeNode* curr,vector<int> &path,vector<vector<int> > &paths){
        
        if(curr == NULL){
            return;
        }
        
        path.push_back(curr->val);
        
        if(curr->left==NULL && curr->right==NULL){
            paths.push_back(path);
        }
        
        check(curr->left,path,paths);
        check(curr->right,path,paths);
        
        path.pop_back();
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<int> path;
        vector<vector<int> > paths;
        
        check(root,path,paths);
        
        vector<string> ans;
        
        int n = paths.size();
        string s;
        int op=1;
        
        for(int i=0;i<n;i++){
            s="";op=1;
            for(int j=0;j<(int)paths[i].size();j++){
                s+=to_string(paths[i][j]);
                if(op<(int)paths[i].size()){
                    s+="->";
                }
                op++;
                
            }
            ans.push_back(s);
        }
        return ans;
    }
};

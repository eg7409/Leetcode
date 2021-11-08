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
    
    int xdepth = -1, ydepth = -1;
    TreeNode* xparent = NULL, *yparent = NULL;
    
    void depth(TreeNode* root,TreeNode* parent,int x,int y,int level){
        
        if(root==NULL){
            return;
        }
        
        if(root->val == x){
            xdepth = level;
            xparent = parent;
            return;
        }
        
        else if(root->val == y){
            ydepth = level;
            yparent = parent;
            return;
        }
        
        else{
            depth(root->left,root,x,y,level+1);
            depth(root->right,root,x,y,level+1);
        }
        
    }
    bool isCousins(TreeNode* root, int x, int y) {
        
        depth(root,root,x,y,0);
        
        return xdepth == ydepth && xparent != yparent;
    }
};

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        
        if(root == NULL){
            return {};
        }
        
        vector<int> res;
        stack<Node*> st;
        st.push(root);
        
        while(!st.empty()){
            
            Node* curr = st.top();
            st.pop();
            res.push_back(curr->val);
            
            for(auto n : curr->children){
                st.push(n);
            }
        }
        
        reverse(res.begin(),res.end());
        return res;
    }
};

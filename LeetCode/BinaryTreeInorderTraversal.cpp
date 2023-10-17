class Solution {
public:
    vector<int>maow(TreeNode* root,vector<int> &v){
        if(root==NULL){
            return v;
        }
        maow(root->left,v);
        v.push_back(root->val);
        maow(root->right,v);
        return v;
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        return maow(root,v); 
    }
};

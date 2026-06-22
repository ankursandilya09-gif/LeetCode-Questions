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
    vector<int> ans(TreeNode* root, vector<int> &temp){
       
        if(root==nullptr) return temp;
        temp.push_back(root->val);
        ans(root->left,temp);
        ans(root->right,temp);

        return temp;
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
         vector<int> temp;
        vector<int> res = ans(root,temp);
        return res;
    }
};
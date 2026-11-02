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
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode* > q;
        q.push(root);
        int ok=0;
        while(!q.empty()){
            TreeNode* node=q.front();
            q.pop();
            if(node->right!=nullptr && node->left==nullptr) return false;
            if(ok==1 && (node->right!=nullptr || node->left!=nullptr)) return false;
            if(node->right==nullptr || node->left==nullptr) ok=1;
            if(node->left!=nullptr) q.push(node->left);
            if(node->right!=nullptr) q.push(node->right);
        }
        return true;
    }
};
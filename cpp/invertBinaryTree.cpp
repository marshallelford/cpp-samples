/* 
 *
 * Given the root of a binary tree, invert the tree, and return its root.
 *
 *
 * Definition for a binary tree node:
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 * 
 */

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) return root;
        
        TreeNode* ans = new TreeNode();
        invertTree(root, ans);
        return ans;
    }
    
    void invertTree(TreeNode* root, TreeNode* ans) {
        if (root == NULL) return;
        
        ans->val = root->val;
        
        if (root->left != NULL) {
            ans->right = new TreeNode();
            invertTree(root->left, ans->right);
        }
        if (root->right != NULL) {
            ans->left = new TreeNode();
            invertTree(root->right, ans->left);
        }
    }
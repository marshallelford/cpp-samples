/* 
 *
 * Given an integer array nums where the elements are sorted in ascending order, 
 * convert it to a height-balanced binary search tree.
 * 
 * A height-balanced binary tree is a binary tree in which the depth of the two 
 * subtrees of every node never differs by more than one.
 *
 *
 * Definition for a binary tree node.
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        // place the middle in the current node
        // for left, pass through nums from start to middle - 1
        // for right, pass thorugh nums from middle + 1 to end
        if (nums.empty()) {
            return NULL;
        }
        TreeNode* head = sortedArrayToBST(nums, 0, nums.size() - 1);
        return head;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums, int start, int end) {
        if (start > end) {
            return NULL;
        }
        int mid = (end + start) / 2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = sortedArrayToBST(nums, start, mid-1);
        node->right = sortedArrayToBST(nums, mid + 1, end);
        return node;
    }
};
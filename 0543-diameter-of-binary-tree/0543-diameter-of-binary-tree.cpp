/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int maxDia;
    int diam(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int leftHeight = diam(root->left);
        int rightHeight = diam(root->right);

        maxDia = max(maxDia, leftHeight + rightHeight);

        return 1 + max(leftHeight, rightHeight);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        maxDia =0;
        int x = diam(root);

        return maxDia;
    }
};
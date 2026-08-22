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
    TreeNode* findNode(TreeNode* root,int val){
        if(root == nullptr){
            return new TreeNode(val);
        }

        if(val > root->val){
            root->right = findNode(root->right,val);
        }else if(val < root ->val){
            root->left= findNode(root->left,val);
        }
        return root;
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        root = findNode(root,val);
        return root;
    }
};
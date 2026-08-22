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
    bool isSame(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) {
            return true;
        } else if ((p == nullptr && q != nullptr) ||
                   (p != nullptr and q == nullptr)) {
            return false;
        } else {

            if (p->val == q->val) {
                if (isSame(p->left, q->left) && isSame(p->right, q->right)) {
                    return true;
                }
            } else {
                return false;
            }
        }

        return false;
    }

    bool check(TreeNode* root, TreeNode* subRoot) {
        if (root == nullptr && subRoot == nullptr) {
            return true;
        }else if ((root == nullptr && subRoot != nullptr) ||
                   (root != nullptr and subRoot == nullptr)) {
            return false;}

        if (root->val == subRoot->val) {
            if(isSame(root,subRoot)){
                return true;
            }else{
                return (check(root->left,subRoot) || check(root->right,subRoot));
            }
        }else{
            return (check(root->left,subRoot) || check(root->right,subRoot));
        }

        return false;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return check(root, subRoot);
    }
};
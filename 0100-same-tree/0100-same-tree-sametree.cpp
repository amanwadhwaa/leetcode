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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool x = isSame(p, q);
        return x;
    }
};
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
    bool helper(TreeNode* t1,TreeNode* t2){
        if(t1 == NULL && t2 == NULL){
            return true;
        }
        if(t1 == NULL || t2 == NULL){
            return false;
        }
        bool isLeftSame = helper(t1->left,t2->right);
        bool isRightSame = helper(t1->right,t2->left);

        return t1->val == t2->val && isLeftSame && isRightSame;
    }
    bool isSymmetric(TreeNode* root) {
        return helper(root->left,root->right);
    }
};
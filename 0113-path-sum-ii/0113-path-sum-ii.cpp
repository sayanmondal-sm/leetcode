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
    void pathSum(TreeNode* root, vector<int> &path, vector<vector<int>>&ans){
        if(root == NULL){
            return;
        }

        path.push_back(root->val);

        if(root->left == NULL && root->right == NULL){
            ans.push_back(path);
        }

        pathSum(root->left, path, ans);
        pathSum(root->right, path, ans);

        path.pop_back();

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<vector<int>>temp;
        vector<int>path;

        pathSum(root,path,ans);

        for(int i=0; i<ans.size(); i++){
            int sum = 0;
            for(int j=0; j<ans[i].size(); j++){
                sum += ans[i][j];
            }
            if(sum == targetSum){
                temp.push_back(ans[i]);
            }
        }
        return temp;
    }
};
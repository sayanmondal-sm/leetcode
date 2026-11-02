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
    vector<double> helper(TreeNode* root){
        queue<TreeNode*>q;
        vector<double>ans;
        double avg = 0;
        q.push(root);
        while(q.size()>0){
            double sum = 0;
            int n = q.size();
            for(int i=0; i<n; i++){
                TreeNode* curr = q.front();
                q.pop();
                sum += curr->val;
                if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        } 
     }       
        avg = sum/n;
        ans.push_back(avg);
        
    }
    return ans;
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        return helper(root);
    }
};
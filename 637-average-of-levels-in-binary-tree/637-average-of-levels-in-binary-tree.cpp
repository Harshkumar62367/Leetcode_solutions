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
     vector<double> averageOfLevels(TreeNode* root) {
        if (!root) return {};

        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        while (!empty(q)) {
            const int q_size = size(q);
            long sum = 0;
            for (int i = 0; i < q_size; ++i) {
                TreeNode* node = q.front(); q.pop();
                
                sum += node->val;
                
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            ans.push_back(static_cast<double>(sum) / q_size);
        }
        return ans;
    }
};
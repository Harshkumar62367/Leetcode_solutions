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
    int goodNodes(TreeNode* root) {
       if (!root) return 0;

        stack<pair<TreeNode*, int>> st;
        st.push({root, numeric_limits<int>::min()});
        int ans = 0;
        while (!empty(st)) {
            auto [node, mx] = st.top(); st.pop();
            
            ans += node->val >= mx;
            mx = max(mx, node->val);
            if (node->left) st.push({node->left, mx});
            if (node->right) st.push({node->right, mx});
        }
        
        return ans;
    }
};
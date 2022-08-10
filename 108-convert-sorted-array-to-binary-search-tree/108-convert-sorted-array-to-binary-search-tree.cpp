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
    TreeNode* f(int i, int j, vector<int>& nums) {
        if(i > j) {
            return nullptr;
        }
        int rootIndex = (i+j)/2;
        TreeNode* root = new TreeNode(nums[rootIndex]);
        root->left = f(i, rootIndex - 1, nums);
        root->right = f(rootIndex + 1, j, nums);
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        return f(0, n-1, nums);
    }
};
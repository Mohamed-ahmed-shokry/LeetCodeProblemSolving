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
private:
    // int sum = 0;
    void rangeSum(TreeNode* root, int low, int high, int &sum)
    {
        if (root == nullptr) return;
        
        if (root->val <= high && root->val >= low)
        {
            sum += root->val;
        }
        
        rangeSum(root->left, low, high, sum);
        rangeSum(root->right, low, high, sum);
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) 
    {
        int sum = 0;
        rangeSum(root, low, high, sum);
        return sum;
    }

};
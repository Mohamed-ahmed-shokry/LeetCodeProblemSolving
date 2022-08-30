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
    // d l r
    vector<int> preorderTraversal(TreeNode* root) 
    {
        vector<int> ans;
        preorderVisit(root, ans);
        return ans;
    }
private:
    void preorderVisit (TreeNode* root, vector<int> &ans)
    {
        if(!root)
            return;
        ans.push_back(root->val);
        preorderVisit(root->left, ans);        
        preorderVisit(root->right, ans);
    }
};
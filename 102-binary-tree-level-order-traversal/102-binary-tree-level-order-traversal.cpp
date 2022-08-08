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
    vector<vector<int>> levelOrder(TreeNode* root)
    {
        vector<vector<int>> result;
        queue<TreeNode *> q;
        TreeNode* dummy;
        if (!root) return result;

        q.push(root);
        
        while (!q.empty()) 
        {
            int n = q.size();
            vector<int> currLevel;
            
            while (n--)
            {
                dummy = q.front();
                q.pop();
                currLevel.push_back(dummy->val);
                
                if(dummy->left)
                    q.push(dummy->left);
                if (dummy->right)
                    q.push(dummy->right);
                
            }
            
            result.push_back(currLevel);
      }
        
      return result;
    }
};







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
    bool isSameTree(TreeNode* p, TreeNode* q)
    {
        queue<TreeNode*> c1, c2;
        TreeNode* d1, *d2;
        
        if (!p && !q)
            return true;
        if((!p && q) || (p && !q))
            return false;
            
        c1.push(p); c2.push(q);
        
        while(!c1.empty() || !c2.empty())
        {
            d1 = c1.front(); 
            d2 = c2.front();
            c1.pop();
            c2.pop();
            
            if (d1->val != d2->val)
                return false;
            
            if ((d1->left && !d2->left) || (!d1->left && d2->left))
                return false;
            
            if ((d1->right && !d2->right) || (!d1->right && d2->right))
                return false;
            
            if(d1->left)
            {
                c1.push(d1->left);
                c2.push(d2->left);
            }
            
            if(d1->right)
            {
                c1.push(d1->right);
                c2.push(d2->right);
            }
        }
        
        
        return true;
    }
};
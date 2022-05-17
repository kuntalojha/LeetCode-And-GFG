/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans;
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) 
    {
        // if my cloned tree is null then return NULL
        // because we can not find our target in NULL tree
        if(cloned==NULL)
            return NULL;
        
        // at any point of time , if my clones tree node value is equal to target then store it into our ans
        // Node found
        if(cloned->val == target->val)  
            ans = cloned;
        
        // going to left for cheking our target
        getTargetCopy(original,cloned->left,target);
        
        // going to right for checking our target
        getTargetCopy(original,cloned->right,target);
        
        // at the end return our stored ans
        return ans;
    }
};
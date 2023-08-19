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
    bool check(TreeNode* leftSide , TreeNode*rightSide){
        if(leftSide == NULL && rightSide == NULL)
        {
            return true;
        }
        if(leftSide == NULL || rightSide == NULL)
        {
            return false;
        }
        if(leftSide->val == rightSide->val){
            return check(leftSide->left,rightSide->right) && check(leftSide->right,rightSide->left);
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        TreeNode* leftSide = root->left;
        TreeNode* rightSide = root->right;
        return check(leftSide,rightSide);
    }
};
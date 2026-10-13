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

    bool checkisValid(TreeNode* root, long min, long max){
        if(root==nullptr){
            return true;
        }
        if(root->val<=min||root->val>=max){
            return false;
        }
        bool a=checkisValid(root->left,min,root->val);
        bool b=checkisValid(root->right,root->val,max);
        return a&&b;
    }

    bool isValidBST(TreeNode* root) {
        long min=LONG_MIN;
        long max=LONG_MAX;
        if(checkisValid(root,min,max)){
            return true;
        }
        else{
            return false;
        }
    }
};
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

    void inOrder(TreeNode* root, int &k, int &curr, int &ans){
        if(root==nullptr){
            return;
        }
        inOrder(root->left,k,curr,ans);
        if(curr==k){
            ans=root->val;
        }
        curr++;
        inOrder(root->right,k,curr,ans);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        int ans=-1;
        int curr=1;
        inOrder(root,k,curr, ans);
        return ans;
    }
};
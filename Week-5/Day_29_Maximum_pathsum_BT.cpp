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
    //the path can be any node to any node, and its not mandatory to go through the root of the tree.
    //We do something like a postorder traversal and there are a couple of cases while int the recursion stack
    //1) We consider either left subtree with root or right subtree with root and control goes back to its root.
    //2) if we consider left+right+root then its the subtree with maxsum
    //3) if root->val>maxsum  && root->val>left && root->val>right then we consider only the root (left and right not conisered),and control goes back in the recst.
    //and this continues until we traverse the entire tree and we get the maxsum which is the answer.
    int path(TreeNode* root,int &maxi)
    {
        if(root==NULL)
            return 0;
        int left=max(path(root->left,maxi),0);
        int right=max(path(root->right,maxi),0);
        
        maxi=max(maxi,max(max(root->val,root->val+max(left,right)),left+right+root->val));
        return max(left,right)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        int res=INT_MIN;
        int x=path(root,res);
        return res;
        
        
    }
};
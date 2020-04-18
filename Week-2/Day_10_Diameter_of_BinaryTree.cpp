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
    //int res=INT_MIN;
    //Very popular Interveiw question using Tree data Structure.
    //Concept very important to solve trickier problems like "Lowest Common Ancester"
public:
    int diameterrec(TreeNode* root,int &res)
    {
         if(root==NULL)
            return 0;
        //else if(root->left==NULL && root->right==NULL)
            //return 1;
        //Recursively finding left and right height
        int lh=diameterrec(root->left,res);
        int rh=diameterrec(root->right,res);
        res=max(res,lh+rh);
        return 1+max(lh,rh);
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int res=0;
        int ans=diameterrec(root,res);
        //Always maximum between left and right height which includes Root
        return res;
    }
};
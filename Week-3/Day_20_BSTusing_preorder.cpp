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
    //Very Important Concept involves concept of BST and tree traversal.
    //Time Complexity of O(n) and auxilary space is recstack O(h), where h is height of tree.
    TreeNode* BSTRec(TreeNode* root,int i)
    {
        if(root==NULL)
            root=new TreeNode(i);
        else
        {
            if(i<root->val)
                root->left=BSTRec(root->left,i);
            else if(i>root->val)
                root->right=BSTRec(root->right,i);
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root=NULL;
        //TreeNode* root1=NULL;
        for(int i:preorder)
            root=BSTRec(root,i);
        
        return root;
        
    }
};
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
    //Traverse in DFS manner and keep incrementing x as the level of tree increases
    //when we reach the leaf node check it with last element of input vector, take care of  corner cases where the tree height is more than the vector size
    //If any node gets mismatched with arr[x] this means that current path is not identical to the given sequence of root to leaf path, so we return back and move in right subtree.
    bool isValid(TreeNode *root,vector<int>&arr,int n,int x)
    {
        if(root==NULL)
            return (n==0);
       
        
        if((root->left==NULL && root->right==NULL) && (x<n) &&(root->val==arr[x]) && x==n-1)
            return true;
        
        if(x<n) 
           return ((root->val==arr[x]) && (isValid(root->left,arr,n,x+1) || isValid(root->right,arr,n,x+1)));
        else
            return false;
        
        
        
        
        
    }
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        if(root==NULL)
            return false;
        
        int n=arr.size();
        bool x=isValid(root,arr,n,0);
        return x;
    }
};
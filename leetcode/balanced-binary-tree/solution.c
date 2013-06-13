/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
int traverse(TreeNode *root, int *flag)
{
    if(root == NULL)
    {
        return 0;
    }
    
    
    if(root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    
    int left = 0, right = 0, result = 0;
    
    if(root->left != NULL)
        left = traverse(root->left, flag);
    if(root->right != NULL)
        right = traverse(root->right, flag);
    
    if( abs(left - right) > 1)
        *flag = 0;
    
    result = right > left ? right + 1 : left + 1;
    return result;
    
    
}
class Solution {
public:
    bool isBalanced(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        int flag  = 1;
        traverse(root, &flag);
        return flag ? true : false;
        
    }
};

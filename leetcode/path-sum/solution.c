/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void traveser(TreeNode *root, int sum, int expected, int *flag)
{
    if(root == NULL) return;
    
    if(*flag) return;
    
    sum += root->val;
    
    if(root->left == NULL && root-> right == NULL)
    {
        if(sum == expected) *flag = 1;
        return;
    }
    
    traveser(root->left, sum, expected, flag);
    traveser(root->right, sum, expected, flag);
    
    
    
}
class Solution {
public:
    bool hasPathSum(TreeNode *root, int sum) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int flag = 0;
        traveser(root, 0, sum, &flag);
        return flag ? true : false;
    }
};

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 

void traverse(TreeNode *root, int num, int *max)
{
    if(root == NULL)
    {
        *max = 0;
        return;
    }
    
    if(root->left == NULL && root->right == NULL)
    {
        *max = *max < num ? num  : *max;
        return ;
    }
        
    else
    {
        if(root-> left != NULL)
         traverse(root->left, num + 1, max);
        if(root->right != NULL)
         traverse(root->right, num + 1, max);  
    }
        
}

class Solution {
public:
    int maxDepth(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
         int max = INT_MIN;
        traverse(root, 1, &max);
        return max;
    }
};

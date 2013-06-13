#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
typedef struct Node
 {
    int val;
    struct Node * left;
    struct Node * right;
 } TreeNode;

void traverse(TreeNode *root, int num, int *min)
{
    if(root == NULL)
    {
        *min = 0;
        return;
    }
    
    if(root->left == NULL && root->right == NULL)
    {
        *min = *min > num ? num  : *min;
        return ;
    }
        
    else
    {
        if(root-> left != NULL)
         traverse(root->left, num + 1, min);
        if(root->right != NULL)
         traverse(root->right, num + 1, min);  
    }
        
}

int minDepth(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int min = INT_MAX;
        traverse(root, 1, &min);
        return min;
       
    }

int
main()
{
    return 0;
}



#include<stdio.h>
#include<stdlib.h>

struct TreeNode 
{
  int key;
	struct TreeNode *left;
	struct TreeNode *right;
	struct TreeNode(int v):key(k),left(NULL),right(NULL){ }
};

void removeOutsideRange(TreeNode *root, int min, int max)
{
	if (!root)
	{
		return NULL;
	}
	root->left=removeOutsideRange(root->left,min,max);
	root->right=removeOutsideRange(root->right,min,max);
	if (root->key<min)
	{
		TreeNode *rchild=root->right;
		delete root;
		return rchild;
	}
	if (root->key>max)
	{
		TreeNode *lchild=root->left;
		delete root;
		return lchild;
	}
	return root;
}
void newNode(int num) 
{ 
    node* temp = new node; 
    temp->key = num; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
   
void insert(node* root, int key) 
{ 
    if (root == NULL) 
       return newNode(key); 
    if (root->key > key) 
       root->left = insert(root->left, key); 
    else
       root->right = insert(root->right, key); 
    return root; 
} 
   
void preorderTraversal(node* root) 
{ 
    if (root) 
    { 
		printf(" %d",root->key); 
        preorderTraversal( root->left ); 
		preorderTraversal( root->right ); 
    } 
} 
  
int main() 
{ 
    node* root = NULL; 
    root = insert(root, 6); 
    root = insert(root, -13); 
    root = insert(root, 14); 
    root = insert(root, -8); 
    root = insert(root, 15); 
    root = insert(root, 13); 
    root = insert(root, 7); 
  
    printf("preorder traversal of the given tree is: "); 
    preorderTraversal(root); 
  
    root = removeOutsideRange(root, -10, 13); 
  
    printf("\npreorder traversal of the modified tree is: ");
    preorderTraversal(root); 
  
    return 0;
}


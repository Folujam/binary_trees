#include "binary_trees.h"

/**
* binary_tree_delete - deletes and entire binary tree
* @tree: ptr to tree to be erased
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(root->left);
	binary_tree_delete(root->right);
	free(right);
}

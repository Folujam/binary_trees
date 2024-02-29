#include "binary_trees.h"

/**
* binary_tree_insert_right - insert node at right child
* @parent: pointer to parent(root) of the tree
* @value: int data of the node
* Return: ptr to new node created(binary_tree_t)- {success}/ NULL(failure)
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nnode;

	if (parent == NULL)
		return (NULL);
	nnode = malloc(sizeof(binary_tree_t));
	if (nnode == NULL)
		return (NULL);
	nnode->n = value;
	nnode->left = NULL; /*initialize right child as NULL*/
	if (parent->right != NULL)
	{
		nnode->right = parent->right;
		parent->right->parent = nnode; /*set parent of old child*/
		parent->right = nnode;
	}
	else
	{
		parent->right = nnode;
		nnode->right = NULL;/*initialize left child*/
	}
	nnode->parent = parent; /*set parent of new node*/
	return (nnode);
}

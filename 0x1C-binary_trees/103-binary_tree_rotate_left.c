#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotates nodes in a binary tree to the left
 * @tree: a pointer to the root of the tree
 * Return: The pointer to the new root
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL;
	binary_tree_t *new_root = NULL;

	if (!tree)
		return (NULL);
	if (tree->right)
	{
		new_root = tree->right;
		if (new_root->left)
		{
			temp = new_root->left;
			temp->parent = tree;
		}
		new_root->left = tree;
		new_root->parent = tree->parent;
		tree->parent = new_root;
		tree->right = temp;
	}
	else
		return (tree);
	return (new_root);
}


#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotates nodes in a binary tree to the right
 * @tree: a pointer to the root of the tree
 * Return: The pointer to the new root
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL;
	binary_tree_t *new_root = NULL;
		printf("what\n");

	if (!tree)
		return (NULL);
	if (tree->left)
	{
		new_root = tree->left;
		if (new_root->right)
		{
			temp = new_root->right;
			temp->parent = tree;
		}
		new_root->right = tree;
		new_root->parent = tree->parent;
		tree->parent = new_root;
		tree->left = temp;
	}
	else
		return (tree);
	return (new_root);
}


#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: The root of the tree
 * Return: 1 if it is a perfect binary tree, else 0
 */

 int binary_tree_is_perfect(const binary_tree_t *tree)
 {
	int left_height = 0;
	int right_height= 0;

	if (tree->left)
		left_height = binary_tree_is_perfect(tree->left);
	printf("@node: %i l- height: %i\n", tree->n, left_height);
	if (tree->right)
		right_height = binary_tree_is_perfect(tree->right);
	printf("@node: %i r- height: %i\n", tree->n, right_height);
	if (left_height != right_height)
	{
		printf("return if not right height\n");
		return (0);
	}

	/* check if its a leaf */
	if (!tree->left && !tree->right)
	{
		printf("return 1 if its a leaf\n");
		return (1);
	}
	if (!tree->left || !tree->right)
	{
		printf("return 0 if a node has a child\n");
		return (0);
	}
	printf("else return height\n");
	return (left_height);
 }

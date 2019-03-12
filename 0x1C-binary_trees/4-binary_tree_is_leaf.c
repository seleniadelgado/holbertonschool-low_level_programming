#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf.  
 * @node: node to be checked.
 * Return: 1 if node is leaf, zero if not.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
  //check if the node is a leaf
  // if node is null return 0
  //if both children are NULL return 1
  // else return 0
  if (!node)
    return (0);
  if (!node->left && !node->right)
    return (1);
  else
    return (0);
}

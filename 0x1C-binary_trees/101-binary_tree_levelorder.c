#include "binary_trees.h"

/**
 * binary_tree_levelorder - Traverse through a binary tree using
 * level-order traversal
 * @tree: The pointer to a root node
 * @func: The function that is passed in to operate on a node
 */

void binary_tree_levelorder(const bst_t *tree, void (*func)(int))
{
	ll_s *linked_list;

	if (!tree || !func)
		return;
	linked_list = append(NULL, tree);
	while (linked_list)
	{
		if (linked_list->node->left)
			append(linked_list, linked_list->node->left);
		if (linked_list->node->right)
			append(linked_list, linked_list->node->right);
		func(linked_list->node->n);
		linked_list = pop(linked_list);
	}
}


/**
 * append - Adds a node to the linked list
 * @node: Node to append
 * Return: A pointer to the ll that was created
 */
ll_s *create(const bst_t *node)
{
	ll_s *new_ll;

	new_ll = malloc(sizeof(ll_s *));
	if (!new_ll)
		return (NULL);
	new_ll->node = node;
	new_ll->next = NULL;
	return (new_ll);

}

/**
 * pop - Pops the first item in the list
 * @ll: The linked list
 * Return: The pointer to the next node
 */
ll_s *pop(ll_s *ll)
{
	ll_s *temp;

	if (!ll)
		return (NULL);

	temp = ll;
	ll = ll->next;
	free(temp);
	return (ll);
}

/**
 * append - Adds a node to the linked list
 * @ll: The linked list
 * @node: Node to append
 * Return: A pointer to the appended LL
 */

ll_s *append(ll_s *ll, const bst_t *node)
{
	ll_s *new_ll;
	ll_s *current;

	new_ll = malloc(sizeof(ll_s *));
	if (!new_ll)
		return (NULL);
	new_ll->node = node;
	new_ll->next = NULL;

	if (!ll)
		return (new_ll);
	current = ll;
	while (current->next)
		current = current->next;
	current->next = new_ll;
	return (new_ll);

}

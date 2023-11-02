#include "binary_trees.h"

/**
 * binary_tree_is_leaf -> Checks if a node is a leaf.
 * @node: A pointer to the node to check.
 *
 * Return: 0 if node is NULL or non leaf, Otherwise 1 is returned.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

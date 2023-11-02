#include "binary_trees.h"

/**
 * binary_tree_is_root -> Checks if a given node is a root.
 * @node: A pointer to the node to check.
 *
 * Return: 0 if node is NULL or if root is node is not a root.
 *	Otherwise: 1 is returned.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent)
		return (0);

	return (1);
}

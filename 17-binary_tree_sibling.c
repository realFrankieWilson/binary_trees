#include "binary_trees.h"

/**
 * binary_tree_sibling -> checks the sibling of a node
 * @node: A pointer to the node to find the sibling
 *
 * Description:	If node is NULL or the parent is NULL, NULL is returned.
 *				If node has no sibling, a NULL pointer is returned.
 * Return: 0 if node is NULL, Otherwise a pointer to the sibling is returned.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (
		!node || !node->parent || !node->parent->right || !node->parent->left
		)
		return (0);

	if (node->parent->right == node)
		return (node->parent->left);

	return (node->parent->right);
}


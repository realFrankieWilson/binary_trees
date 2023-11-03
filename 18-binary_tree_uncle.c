#include "binary_trees.h"

/**
 * binary_tree_uncle -> finds the uncle of a node
 * @node: A pointer to the node to find the uncle
 *
 * Description:	If node is NULL or the parent is NULL, NULL is returned.
 *				If node has no uncle, a NULL pointer is returned.
 * Return: 0 if node is NULL, Otherwise a pointer to the uncle is returned.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (
		!node || !node->parent || !node->parent->parent
		)
		return (NULL);

	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);

	return (node->parent->parent->right);
}


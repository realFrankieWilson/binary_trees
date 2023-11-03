#include "binary_trees.h"

/**
 * binary_tree_depth -> Measures the depth of a node in a binary tree
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: 0 if tress is NULL, Otherwise the tree depth is returned.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t node;

	if (!tree || !tree->parent)
		return (0);

	node = binary_tree_depth(tree->parent);
	return (node + 1);
}

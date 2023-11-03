#include "binary_trees.h"

/**
 * binary_tree_nodes-> Counts the nodes of a binary tree
 * @tree: A pointer to the root node of the tree to count the number of nodes
 *
 * Return: 0 if tress is NULL, Otherwise the tree nodes is returned.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t sum;
	int ls, rs;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	ls = binary_tree_nodes(tree->left);
	rs = binary_tree_nodes(tree->right);
	sum = ls + rs;

	return (sum + 1);
}

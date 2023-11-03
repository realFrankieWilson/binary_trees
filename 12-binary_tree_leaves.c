#include "binary_trees.h"

/**
 * binary_tree_leaves-> Counts the leaves of a binary tree
 * @tree: A pointer to the root node of the tree to count the number of leaves
 *
 * Return: 0 if tress is NULL, Otherwise the tree leaves is returned.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t sum;
	int ls, rs;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	ls = binary_tree_leaves(tree->left);
	rs = binary_tree_leaves(tree->right);
	sum = ls + rs;

	return (sum);
}

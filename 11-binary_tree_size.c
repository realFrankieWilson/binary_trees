#include "binary_trees.h"

/**
 * binary_tree_size-> Measures the size of a binary tree
 * @tree: A pointer to the root node to measure the size.
 *
 * Return: 0 if tress is NULL, Otherwise the tree size is returned.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sum;
	int ls, rs;

	if (!tree)
		return (0);

	ls = binary_tree_size(tree->left);
	rs = binary_tree_size(tree->right);
	sum = ls + rs;

	return (sum + 1);
}

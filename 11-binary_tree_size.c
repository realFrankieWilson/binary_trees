#include "binary_trees.h"

/**
 * binary_tree_size -> measures the size of a binary tree.
 * @tree: the tree to be measured
 *
 * Return: the total size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size t lt, rt, sum;

	if (!tree)
		return (0);

	lt = binary_tree_size(tree->left);
	rt = binary_tree_size(tree->right);
	sum = lt + rt;

	return (sum + 1);
}

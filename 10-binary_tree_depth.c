#include "binary_trees.h"

/**
 * binary_tree_height -> Measures the depth of a binary tree.
 * @tree: The tree to be measured.
 *
 * Description: If tree is NULL, The function must return 0.
 * Return: depth of the tree, Otherwise 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t node;

	if (!tree || !tree->parent)
		return (0);

	node = binary_tree_depth(tree->left);
	return (node + 1)
}

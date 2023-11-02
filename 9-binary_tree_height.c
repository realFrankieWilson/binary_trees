#include "binary_trees.h"

/**
 * binary_tree_height -> Measures the height of a binary tree.
 * @tree: The tree to be measured.
 *
 * Description: If tree is NULL, The function must return 0.
 * Return: height of the tree, Otherwise 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hl, hr;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);
	hl = binary_tree_height(tree->left);
	hr = binary_tree_height(tree->right);

	if (hl > hr)
		return (hl + 1);
	else
		return (hr + 1);
}

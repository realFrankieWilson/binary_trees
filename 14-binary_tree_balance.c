#include "binary_trees.h"

/**
 * binary_tree_balance -> Measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to measure the balance factor
 *
 * Return: 0 if tress is NULL, Otherwise Load balance is returned.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int ls, rs;

	if (!tree)
		return (0);

	if (tree->left)
		ls = (int)binary_tree_height(tree->left);
	else
		ls = -1;

	if (tree->right)
		rs = (int)binary_tree_height(tree->right);
	else
		rs = -1;

	return (ls - rs);
}


/**
 * binary_tree_height -> Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: 0 if there is no tree, Otherwise height of the tree is returned.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	if (lh > rh)
		return (lh + 1);
	return (rh + 1);
}


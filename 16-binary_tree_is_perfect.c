#include "binary_trees.h"

/**
 * binary_tree_is_perfect -> checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to be checked
 *
 * Return: 0 if tress is NULL, Otherwise a tree status is returned.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int ls, rs;

	if (!tree)
		return (0);

	ls = (int)binary_tree_size(tree->left);
	rs = (int)binary_tree_size(tree->right);

	if (binary_tree_is_full(tree->left) && ls == rs)
		return (1);

	return (0);
}


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


/**
 * binary_tree_is_full -> checks if a binary tree is full
 * @tree: A pointer to the root node of the tree to be checked
 *
 * Return: 0 if tress is NULL, Otherwise a tree status is returned.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left)
			&& binary_tree_is_full(tree->right));

	return (0);
}


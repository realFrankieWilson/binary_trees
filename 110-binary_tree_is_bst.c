#include "binary_trees.h"
int bst_self_func(const binary_tree_t *, int, int);

/**
 * binary_tree_is_bst -> Checks if a binary tree is a valid Binary Search Tree
 * @tree: A pointer to the root node of the tree to check.
 *
 * Description:
 *				1 is return if tree is valid BST, and 0 otherwise.
 *				if tree is NULL, 0 is returned.
 * Return: 1 if BST, Otherwise 0 is returned.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (bst_self_func(tree, INT_MIN, INT_MAX));
}


/**
 * bst_self_funct -> Runs the algorithm for BST validity
 * @tree: A pointer to the root node of the tree to check.
 * @min: minimum bound node
 * @max: max bound node.
 *
 * Return: 1 if tree is a Valid BST, Otherwise 0.
 */
int bst_self_func(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (
		bst_self_func(tree->left, min, tree->n - 1) &&
		bst_self_func(tree->right, tree->n + 1, max)
		);
}

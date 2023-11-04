#include "binary_trees.h"

/**
 * binary_tree_is_complete -> Checks if a binary tree is complete.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Description:
 *				If tree is NULL, 0 is returned.
 * Return: 1 if tree is complete, Otherwise 0.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if ((tree->left) || (tree->right))
		return (binary_tree_is_complete(tree->left)
			&& binary_tree_is_complete(tree->right));

	return (0);
}

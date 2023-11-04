#include "binary_trees.h"
/**
 * binary_tree_rotate_right -> Performs a right-rotation on a binary tree
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: a pointer to the new root node of the tree once rotated.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (!tree || tree->left == NULL)
		return (tree);

	temp = tree->left;

	if (temp->right)
	{
		tree->left = temp->right;
		temp->right->parent = tree;
	}
	else
		tree->left = NULL;

	temp->right = tree;
	temp->parent = tree->parent;
	tree->parent = temp;

	return (temp);
}

#include "binary_trees.h"
/**
 * binary_tree_rotate_left -> Performs a left-rotation on a binary tree
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: a pointer to the new root node of the tree once rotated.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (!tree || tree->right == NULL)
		return (tree);

	temp = tree->right;

	if (temp->left)
	{
		tree->right = temp->left;
		temp->left->parent = tree;
	}
	else
		tree->right = NULL;

	temp->left = tree;
	temp->parent = tree->parent;
	tree->parent = temp;

	return (temp);
}

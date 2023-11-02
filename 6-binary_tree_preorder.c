#include "binary_trees.h"

/**
 * binary_tree_preorder -> Goes through a binary tree using preorder traversal.
 * @tree: The tree to be traversed.
 * @func: A function pointer to a function to call each node.
 *
 * Description: The value in the node must be passed
 *				as a parameter to this function.
 *				If tree or func is NULL, do nothing.
 * Return: A void pointer.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}

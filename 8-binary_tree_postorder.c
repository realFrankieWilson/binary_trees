#include "binary_trees.h"

/**
 * binary_tree_postorder -> Goes through a binary tree using postorder traversal.
 * @tree: The tree to be traversed.
 * @func: A function pointer to a function to call each node.
 *
 * Description: The value in the node must be passed
 *				as a parameter to this function.
 *				If tree or func is NULL, do nothing.
 * Return: A void pointer.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
	

}

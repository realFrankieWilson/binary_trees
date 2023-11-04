#include "binary_trees.h"
void post_order(const binary_tree_t *, void (*)(int), size_t);
size_t binary_tree_height(const binary_tree_t *);

/**
 * binary_tree_levelorder -> Goes through a binary tree using level-order
 *							traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A function pointer to call each node.
 *
 * Description:
 *				The value of the node must be passed as a parameter to this
 *				this function (func).
 *				If tree or func is NULL, do nothing.
 * Return: A void pointer.
 */
void binary_tree_levelorder(
	const binary_tree_t *tree, void (*func)(int))
{
	size_t level1 = 0, level2 = 0;

	if (!tree || !func)
		return;

	level2 = binary_tree_height(tree) + 1;

	for (level1 = 1; level1 <= level2; level1++)
		post_order(tree, func, level1);

}



/**
 * post_order -> Goes through a binary tree using postorder
 * traversal.
 * @tree: The tree to be traversed.
 * @func: A function pointer to a function to call each node.
 * tlevel: the level of the tree to call func
 *
 * Return: A void pointer.
 */
void post_order(const binary_tree_t *tree, void (*func)(int), size_t tlevel)
{
	if (tlevel == 1)
		func(tree->n);

	else
	{
		post_order(tree->left, func, tlevel -1);
		post_order(tree->right, func, tlevel -1);
	}
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

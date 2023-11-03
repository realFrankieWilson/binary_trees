#include "binary_trees.h"
int pbfun(int base, int exp);

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

	ls = (int)binary_tree_height(tree);
	rs = (int)binary_tree_leaves(tree);

	if (pbfun(2, ls) == rs)
		return (1);

	return (0);
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


/**
 * binary_tree_leaves-> Counts the leaves of a binary tree
 * @tree: A pointer to the root node of the tree to count the number of leaves
 *
 * Return: 0 if tress is NULL, Otherwise the tree leaves is returned.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t sum;
	int ls, rs;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	ls = binary_tree_leaves(tree->left);
	rs = binary_tree_leaves(tree->right);
	sum = ls + rs;

	return (sum);
}



/**
 * pbfun -> A recursive function
 * @base: Base condition
 * @exp: Exponent
 *
 * Return: Power on the base and exponent.
 */
int pbfun(int base, int exp)
{
	if (base < 0)
		return (-1);

	if (exp == 0)
		return (1);

	return (base * pbfun(base, exp - 1));
}


#include "binary_trees.h"
size_t binary_tree_depth(const binary_tree_t *tree);

/**
 * binary_trees_ancestor -> A function that finds the lowest common ancestor
 *							of two nodes.
 * @first: A pointer to the first node
 * @second: A pointer to the second node.
 *
 * Description:
 *				The function returns a pointer to the lowest common
 *				ancestor node of the two given nodes.
 *				If no common ancestor is found, a NULL pointer is returned.
 * Return:	The common ancestor of two nodes, Otherwise NULL is returned.
 */
binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first, const binary_tree_t *second)
{
	size_t ls, rs;

	if (!first || !second)
		return (NULL);

	ls = binary_tree_depth(first);
	rs = binary_tree_depth(second);

	while (ls > rs)
	{
		first = first->parent;
		ls--;
	}

	while (rs > ls)
	{
		second = second->parent;
		rs--;
	}

	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}

	return ((binary_tree_t *)first);
}


/**
 * binary_tree_depth -> Measures the depth of a node in a binary tree
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: 0 if tress is NULL, Otherwise the tree depth is returned.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t node;

	if (!tree || !tree->parent)
		return (0);

	node = binary_tree_depth(tree->parent);
	return (node + 1);
}


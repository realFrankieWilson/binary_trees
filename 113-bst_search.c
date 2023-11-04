#include "binary_trees.h"

/**
 * bst_search -> Searches for a value in a Binary Search Tree.
 * @tree: A pointer to the root node element of the BST to search
 * @value: The value to search in the tree.
 *
 * Return: A pointer to the node of the created BST, Otherwise NULL.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *newnode = (bst_t *)tree;

	if (!tree)
		return (NULL);

	while (newnode)
	{
		if (value == newnode->n)
			return (newnode);

		if (value < newnode->n)
			newnode = newnode->left;
		else if (value > newnode->n)
			newnode = newnode->right;
	}
	return (NULL);
}


#include "binary_trees.h"

/**
 * bst_insert -> Inserts a value in a Binary Search Tree
 * @tree: A double pointer to the root node of the BST to insert the the value
 * @value: the value to store in the node to be inserted
 *
 * Description:
 *				The function returns a pointer to the created node, or NULL on
 *				failure.
 *				If the address stored in tree is NULL, the created node must
 *				become the root node.
 *				If the value is already present in the tree, it must be ignored
 * Return: A double pointer. Otherwise 0.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *node = NULL, *second = NULL, *newnode = NULL;

	if (!tree)
		return (NULL);
	if (*tree == NULL)
		return (*tree = binary_tree_node(NULL, value));
	node = *tree;
	while (node)
	{
		second = node;
		if (value < node->n)
			node = node->left;
		else if (value > node->n)
			node = node->right;
		else if (value == node->n)
			return (NULL);
	}

	newnode = binary_tree_node(NULL, value);
	if (second == NULL)
		second = newnode;
	else if (value < second->n)
	{
		second->left = newnode;
		newnode->parent = second;
	}
	else
	{
		second->right = newnode;
		newnode->parent = second;
	}

	return (newnode);

}

#include "binary_trees.h"

/**
 * binary_tree_insert_right -> Inserts a node as the right-child of
 *	another node.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the created node, Otherwise Null
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (!newnode)
		return (NULL);

	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = parent->right;
	if (newnode->right != NULL)
	{
		parent->right->parent = newnode;
	}
	parent->right = newnode;

	return (newnode);
}

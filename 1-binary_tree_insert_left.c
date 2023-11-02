#include "binary_trees.h"

/**
 * binary_tree_insert_left -> Inserts a node as the left-child of another node.
 * @parent: A pointer to the node to insert the left child in.
 * @value: The value of the node to be inserted.
 *
 * Return: A pointer to the created node, Otherwise NULL is return either on
 *	failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (!newnode)
		return (NULL);

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		newnode->left->parent = newnode;
	}
	parent->left = newnode;

	return (newnode);
}

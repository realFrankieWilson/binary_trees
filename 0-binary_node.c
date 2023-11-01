#include "main.h"

/**
 * binary_tree_node -> Creates a binary tree node.
 * @parent: A pointer to the parent node of the node to be created.
 * @value: The value to put in the new node.
 *
 * Return: A pointer to a newly created node otherwise a Null pointer is returned.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	parent = malloc(sizeof(binary_tree_t));
	if (parent == NULL)
		return;
	parent->n = value;
	parent->left = binary_tree_node(parent, value);
	parent->right = binary_tree_node(parent, value);
	return parent;
}

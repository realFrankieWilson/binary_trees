#include "binary_trees.h"

/**
 * binary_tree_node -> Creates a binary tree node
 * @parent: A pointer to the parent node of the node to create.
 * @value: Value of the the node.
 *
 * Return: A tree pointer, Otherwise A Null pointer is returned.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);
	newnode->parent = parent;
	newnode->n = value;
	newnode->left = newnode->right = NULL;
	return (newnode);
}

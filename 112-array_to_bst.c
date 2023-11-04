#include "binary_trees.h"

/**
 * array_to_bst -> Builds Search Tree from an array.
 * @array: A pointer to the first element of the array to be converted.
 * @size: The number of element in the array.
 *
 * Return: A pointer to the root node of the created BST, Otherwise NULL.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int iterate = 0;
	bst_t *newnode = NULL;

	for (; iterate < size; iterate++)
		bst_insert(&newnode, array[iterate]);

	return (newnode);
}


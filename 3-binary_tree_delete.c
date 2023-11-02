#include "binary_trees.h"

/**
 * binary_tree_delete -> Deletes an entire binary tee.
 * @tree: The tree to be deleted.
 *
 * Return: Nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}

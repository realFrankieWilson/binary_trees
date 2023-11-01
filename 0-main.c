#include "main.h"
void main(void)
{
	binary_tree *root;

	root = binary_tree_node(NULL, 98);

	root->left = binary_tree_node(root, 12);
	root->left->left = binary_tree_node(root->left, 6);
	root->left->right = binary_tree_node(root->left, 16);

	root->right = binary_tree_node(root, 402);
	root->right->left = binary_tree_node(root->right, 2556);
	root->right->left = binary_tree_node(root->right, 512);

	binary_tree_print(root);
	return (0);
}

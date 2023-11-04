#ifndef BINARY_TREES_H
#define BINARY_TREES_H



/******************STANDARD LIBRARIES***********/
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stddef.h>
#include <limits.h>



/******************STRUCTURES*******************/
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;



/*****************FUNCTION PROTOTYPES***********/
void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_node(binary_tree_t *, int);
binary_tree_t *binary_tree_insert_left(binary_tree_t *, int);
binary_tree_t *binary_tree_insert_right(binary_tree_t *, int);
void binary_tree_delete(binary_tree_t *);
int binary_tree_is_leaf(const binary_tree_t *);
int binary_tree_is_root(const binary_tree_t *);
void binary_tree_preorder(const binary_tree_t *, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *);
size_t binary_tree_depth(const binary_tree_t *);
size_t binary_tree_size(const binary_tree_t *);
size_t binary_tree_leaves(const binary_tree_t *);
size_t binary_tree_nodes(const binary_tree_t *);
int binary_tree_balance(const binary_tree_t *);
int binary_tree_is_full(const binary_tree_t *);
int binary_tree_is_perfect(const binary_tree_t *);
binary_tree_t *binary_tree_sibling(binary_tree_t *);
binary_tree_t *binary_tree_uncle(binary_tree_t *);


/***********************ADVANCED TASKS**************************/
binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *, const binary_tree_t *
	);

void binary_tree_levelorder(
	const binary_tree_t *, void (*)(int)
	);

int binary_tree_is_complete(const binary_tree_t *);
binary_tree_t *binary_tree_rotate_left(binary_tree_t *);
binary_tree_t *binary_tree_rotate_right(binary_tree_t *);
int binary_tree_is_bst(const binary_tree_t *);



/**********************BST**************************************/
bst_t *bst_insert(bst_t **, int);
bst_t *array_to_bst(int *, size_t);
bst_t *bst_search(const bst_t *, int);
bst_t *bst_remove(bst_t *, int);





#endif

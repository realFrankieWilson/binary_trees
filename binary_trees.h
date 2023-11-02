#ifndef BINARY_TREES_H
#define BINARY_TREES_H



/******************STANDARD LIBRARIES***********/
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stddef.h>



/******************STRUCTURES*******************/
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;



/*****************FUNCTION PROTOTYPES***********/
void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_node(binary_tree_t *, int);
binary_tree_t *binary_tree_insert_left(binary_tree_t *, int);
binary_tree_t *binary_tree_insert_right(binary_tree_t *, int);
void binary_tree_delete(binary_tree_t *);
#endif

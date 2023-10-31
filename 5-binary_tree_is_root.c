#include "binary_trees.h"

/**
 * binary_tree_is_root - Investigate a node of a root to a binary tree
 * @node: Pointer to the node to examine
 * Return: Returns 1 if node is a root else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}


#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle node of a given node
 * @node: Pointer to examine the node
 * Return: The uncle node, or NULL if none exists
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	return (node == NULL || node->parent == NULL ||	node->parent->parent == NULL
	? NULL
	: (node->parent->parent->left == node->parent
	? node->parent->parent->right
	: node->parent->parent->left));
}

#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Examine a node to determine if it is a leaf to a BT
 * @node: Pointer to the node to investigate
 * Return: Returns 1 if the node is a leaf else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

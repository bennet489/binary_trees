#include "binary_trees.h"

/**
 * binary_tree_nodes -  counts the nodes with at least 1
 * child in a binary tree.
 * @tree: A  pointer to the root node of the tree to count the number of nodes.
 *
 * Return:  the number of nodes with at least 1 child in a binary tree,
 * or NULL if tree if empty.
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_count;
	size_t right_count;

	if (tree == NULL)
		return (0);
	left_count = binary_tree_nodes(tree->left);
	right_count = binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		return (left_count + right_count + 1);
	else
		return (left_count +  right_count);
}

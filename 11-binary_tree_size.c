#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: A pointer to the node for which the depth is to be measured
 *
 * Return: The size of the specified node in the binary tree,
 *  or 0 if the node is NULL.
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	else
	{
		return (1 + binary_tree_size(tree->left)
		+ binary_tree_size(tree->right));
	}
}

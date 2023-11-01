#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: return 1 if the tree is full, else 0.
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if ((tree->left == NULL && tree->right != NULL) ||
	(tree->left != NULL && tree->right == NULL)
		return (0);

	return (binary_tree_is_full(tree->left)
	&& binary_tree_is_full(tree->right));
}

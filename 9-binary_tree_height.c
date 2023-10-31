#include "binary_trees.h"

/**
 * binary_tree_height - Assess the height of a binary tree
 * @tree: Pointer to the root node
 * Return: The height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (tree == NULL)
	return (0);
	if (tree->left)
	height_left = 1 + binary_tree_height(tree->left);
	if (tree->right)
	height_right = 1 + binary_tree_height(tree->right);
	return (height_left > height_right ? height_left : height_right); }

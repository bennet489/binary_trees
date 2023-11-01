#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			left_height = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			right_height = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((left_height > right_height) ? left_height : right_height);
	}
}


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

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree.
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = binary_tree_height_b(tree);
	size_t leaves = 1;
	size_t i = 0;

	if (tree == NULL)
		return (0);

	while (i < height)
	{
		leaves *= 2;
		i++;
	}

	return (leaves - 1 == (size_t)binary_tree_size(tree));
}

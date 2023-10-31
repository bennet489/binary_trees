#include "binary_trees.h"
/**
 * binary_tree_preorder - Runs through a BT using a pre-order traversal
 * @tree: Pointing to the node root which we are traversing
 * @func: Pointing to a function to call at each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}

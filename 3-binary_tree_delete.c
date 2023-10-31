#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_delete - Deletion of a binary tree
 * @tree: Pointer pointing to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}

}

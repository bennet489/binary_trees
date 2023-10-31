#include "binary_trees.h"

/**
 * binary_tree_depth - Measure the depth of a node in a binary tree.
 * @tree: A pointer to the node for which the depth is to be measured.
 * 
 * Return: The depth of the specified node in the binary tree,
 *  or 0 if the node is NULL.
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;
    const binary_tree_t *current = tree;

    if (tree == NULL)
        return 0;

    while (current)
    {
        depth++;
        current = current->left;
        
        if (current == NULL)
        {
              current = tree->right;
        }
    }
    return (depth);
}
#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height of a tree
 *
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return - height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left = 0, right = 0;

    if (tree == NULL)
        return (0);

    l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
    r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
    return ((l > r) ? l : r);
}
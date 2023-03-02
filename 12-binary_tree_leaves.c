#include "binary_trees.h"

/**
 * binary_tree_leaves - calculates the leaves of a node in a binary tree.
 * @tree: A pointer to the node to calculate the leaves.
 *
 * Return: If tree is NULL, your function must return 0, else return the leaves.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t leaves = 0;

    if (tree == NULL)
        return (0);

    leaves += (!tree->left && !tree->right) ? 1 : 0;
    leaves += binary_tree_leaves(tree->left);
    leaves += binary_tree_leaves(tree->right);

    return (leaves);
}
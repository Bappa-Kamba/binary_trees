#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a node in a binary tree.
 * @tree: A pointer to the node to measure the size.
 *
 * Return: If tree is NULL, your function must return 0, else return the size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    return ((tree) ? 1 + binary_tree_size(tree->parent) : 0);
}
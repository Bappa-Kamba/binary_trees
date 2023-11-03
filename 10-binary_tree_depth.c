#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a tree
 * @tree: pointer to the tree (node) to measure
 *
 * Return: 0 if NULL, depth otherwise
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;
	if (tree->parent == NULL)
		return (0);
	depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}

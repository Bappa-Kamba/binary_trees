#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a tree
 * @tree: pointer to a tree
 *
 * Return: 0 if tree is NULL, size of tree otherwise
 *
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
		return (0);
	size +=  binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	return (size);
}

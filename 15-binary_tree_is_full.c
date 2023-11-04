#include "binary_trees.h"

/**
 * binary_tree_leaves - calculates the number of nodes that are leaves
 * @tree: a pointer to the tree to measure
 *
 * Return: 0 if the tree is NULL, num_of_leaves otherwise
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num_of_leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent && tree->left == NULL && tree->right == NULL)
		num_of_leaves += 1;
	num_of_leaves += binary_tree_leaves(tree->left);
	num_of_leaves += binary_tree_leaves(tree->right);

	return (num_of_leaves);

}

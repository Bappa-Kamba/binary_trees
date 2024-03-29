#include "binary_trees.h"

/**
 * binary_tree_balance - calculates the balance factor of a tree
 * @tree: a pointer to the tree to measure
 *
 * Return: 0 if the tree is NULL, balance factor otherwise
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	return (left - right);
}

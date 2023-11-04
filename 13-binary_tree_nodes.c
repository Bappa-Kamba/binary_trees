#include "binary_trees.h"

/**
 * binary_tree_nodes - calculates the number of nodes that are nodes
 * @tree: a pointer to the tree to measure
 *
 * Return: 0 if the tree is NULL, num_of_nodes otherwise
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num_of_nodes = 0;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		num_of_nodes += 1;
	num_of_nodes += binary_tree_nodes(tree->left);
	num_of_nodes += binary_tree_nodes(tree->right);

	return (num_of_nodes);

}

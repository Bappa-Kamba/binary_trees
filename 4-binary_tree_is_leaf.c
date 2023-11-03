#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: the node to check
 *
 * Return - 1 if node is leaf, 0 otherwise
 *
 * Description: if node is NULL, node is not leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}

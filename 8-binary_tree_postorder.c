#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses the tree in post-order
 * @tree: tree to traverse
 * @func: a pointer to a fucntion to call for each node
 *
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}

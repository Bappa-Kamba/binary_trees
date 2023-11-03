#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses the tree in pre-order
 * @tree: tree to traverse
 * @func: a pointer to a fucntion to call for each node
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}

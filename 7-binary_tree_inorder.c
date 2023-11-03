#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses the tree in in-order
 * @tree: tree to traverse
 * @func: a pointer to a fucntion to call for each node
 *
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}

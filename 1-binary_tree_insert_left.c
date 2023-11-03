#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node into the left sub-tree
 * @parent: the parent node to insert into
 * @value: value to insert
 *
 * Return: new_node upon success, NULL otherwise
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}

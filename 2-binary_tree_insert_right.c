#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node into the right sub-tree
 * @parent: the parent node to insert into
 * @value: value to insert
 *
 * Return: new_node upon success, NULL otherwise
 *
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		free(new_node);
		return (NULL);

	if (parent == NULL)
		free(new_node);
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}

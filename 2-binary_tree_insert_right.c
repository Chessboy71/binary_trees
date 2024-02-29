#include "binary_trees.h"

/**
 * binary_tree_insert_right - Creates a left binary tree child.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newl;

	if (!parent)
		return (NULL);

	newl = binary_tree_node(parent, value);

	if (!newl)
		return (NULL);

	if (parent->right)
	{
		newl->right = parent->right;
		parent->right->parent = newl;
	}
	parent->right = newl;

	return (newl);
}

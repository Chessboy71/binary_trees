#include "binary_trees.h"

/**
 * binary_tree_is_root - Deletes a whole binary tree.
 * @node: A pointer to the node.
 *
 * Return: 1 if a leaf.
 *         Otherwise - 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	return (0);
}

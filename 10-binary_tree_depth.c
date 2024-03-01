#include "binary_trees.h"

/**
 * binary_tree_depth - returns the depth of a node.
 * @tree: A pointer to the node.
 *
 * Return: the depth of the node.
 *         Otherwise - 0.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{
		if (!tree->parent)
			return (0);
		return (binary_tree_depth(tree->parent) + 1);
	}
	return (0);

}

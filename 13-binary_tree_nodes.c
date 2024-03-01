#include "binary_trees.h"

/**
 * binary_tree_nodes - calculates nodes .
 * @tree: A pointer to the node.
 *
 * Return: the number of nodes with at least 1 child.
 *         Otherwise - 0.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left != NULL || tree->right != NULL)
			return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	}
	return (0);
}

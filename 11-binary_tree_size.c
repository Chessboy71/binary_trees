#include "binary_trees.h"

/**
 * binary_tree_size - Deletes a whole binary tree.
 * @tree: A pointer to the node.
 *
 * Return: 1 if a leaf.
 *         Otherwise - 0.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
